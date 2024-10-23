#ifndef QUOTE_H
#define QUOTE_H

#include<iostream>
using std::ostream;
using std::cout;
using std::endl;
#include<string>
using std::string;

class Quote {
public:
  Quote() = default; 
  Quote(Quote const & q):bookNo(q.bookNo), price(q.price) {
    cout<<"quote copy-constructor" <<endl;
  }
  Quote & operator=(Quote const & q){
    bookNo = q.bookNo;
    price = q.price;
    cout<<"quote copy-assign" <<endl;
    return *this;
  }
  Quote(Quote && q): bookNo(std::move(q.bookNo)), price(std::move(q.price)) {
    cout<<"quote move-constructor" <<endl;
  };
  Quote & operator=(Quote && q){
    bookNo = std::move(q.bookNo);
    price = std::move(q.price);
    cout<<"quote move-assign" <<endl;
    return *this;
  };
  virtual ~Quote(){
    bookNo.~string();
    cout<<"quote destructor" <<endl;
  } // dynamic binding for the destructor
  //
  /*
    note: & before {} is a reference qualifer 
    it indicates that:
      when this method is evoked, (this) can only bind to lvalue

    similarly for && for rvalue
  */
  virtual Quote * clone() const & { return new Quote(*this);}
  virtual Quote * clone() && {return new Quote(std::move(*this));}
  //
  Quote(const std::string &book, double sales_price):
    bookNo(book), price(sales_price) { cout<<"quote const"<<endl; }
  std::string isbn() const { return bookNo; }
  virtual double net_price(std::size_t n) const
    { return n * price; }
  virtual void debug() const {
    cout << "debug for quote" << endl;
  }
private:
  std::string bookNo; // ISBN number of this item
protected:
  double price = 0.0; // normal, undiscounted price
};


class Disc_quote : public Quote {
public:
  Disc_quote() = default;
  Disc_quote(Disc_quote const & bq): Quote(bq), 
    quantity(bq.quantity), discount(bq.discount){
    cout << "bulk quote copy-constructor" << endl;
  }
  Disc_quote(Disc_quote && bq): Quote(std::move(bq)),
    quantity(std::move(bq.quantity)), discount(std::move(bq.discount)){
    cout << "bulk quote move-constructor" << endl;
  }
  Disc_quote & operator=(Disc_quote const & bq){
    Quote::operator=(bq);
    quantity = bq.quantity; discount = bq.discount;
    cout << "bulk quote copy-assignment" << endl;
    return *this;
  }
  Disc_quote & operator=(Disc_quote && bq){
    Quote::operator=(std::move(bq));
    quantity = std::move(bq.quantity); 
    discount = std::move(bq.discount);
    cout << "bulk quote copy-assignment" << endl;
    return *this;
  }
  ~Disc_quote(){
    // Quote::~Quote() invoked automatically
    cout << "bulk quote destructor" << endl;
  }
  // this will fail as Disc_quote is abstract class
  //Disc_quote * clone() const & override{ return new Disc_quote(*this);}
  //
  Disc_quote(const std::string & book, double price,
             std::size_t qty, double disc):
    Quote(book, price),
    quantity(qty), discount(disc) { cout<<"disc_quote const"<<endl;}
  // pure-virtual , this makes Disc_quote an abstract class
  // no instantiation of Disc_quote object will be possible
  double net_price(std::size_t) const override = 0;
protected:
  std::size_t quantity = 0; // purchase size for the discount to apply
  double discount = 0.0; // fractional discount to apply
};


class Bulk_quote : public Disc_quote {
std::size_t min_qty = 0;
public:
  Bulk_quote() = default;
  Bulk_quote * clone() const & override{ 
    cout << "bulk_quote clone copy" << endl;
    return new Bulk_quote(*this);
  }
  Bulk_quote * clone() && override{ 
    cout << "bulk_quote clone move" << endl;
    return new Bulk_quote(std::move(*this));
  }
  // It's eqv. to
  //using Disc_quote::Disk_quote;
  Bulk_quote(const std::string& book, double price,
             std::size_t qty, double disc):
    Disc_quote(book, price, qty, disc) { cout<<"bulk_quote const"<<endl;}
  // overrides the base version to implement the bulk purchase discount policy
  double net_price(std::size_t n) const override{
    float factor = 1;
    cout << "bulk discount applied" << endl;
    if (100>=n>=min_qty) {
      factor = discount;
    } else if (n>100) {
      factor = ((n-100)+100*discount)/n;
    }
    //cout << factor << endl;
    return n*price*factor;
  }
};

double print_total
(ostream &os, const Quote &item, size_t n)
{
double ret = item.net_price(n);
os << "ISBN: " << item.isbn() // calls Quote::isbn
<< " # sold: " << n << " total due: " << ret << endl;
return ret;
}

#endif
