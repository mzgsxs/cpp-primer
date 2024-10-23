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
  //
  Disc_quote(const std::string& book, double price,
             std::size_t qty, double disc):
    Quote(book, price),
    quantity(qty), discount(disc) { cout<<"disc_quote const"<<endl;}
  // pure-virtual , this makes Disc_quote an abstract class
  // no instantiation of Disc_quote object will be possible
  double net_price(std::size_t) const = 0;
protected:
  std::size_t quantity = 0; // purchase size for the discount to apply
  double discount = 0.0; // fractional discount to apply
};


class Bulk_quote : public Disc_quote {
std::size_t min_qty = 0;
public:
  Bulk_quote() = default;
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

#include<vector>
using std::vector;
int main(int argc, char** argv){

Quote q("qbook", 13);
cout << q.isbn() << endl;
Bulk_quote bq("bqbook", 13, 100, 0.9);
cout << bq.isbn() << endl;
cout << "---------------------------" << endl;

vector<Quote> vq;
vector<Bulk_quote> vbq;

vector<Quote *> vqp;
vector<Bulk_quote *> vbqp;

cout << "-### expect---------------------------" << endl;
cout << bq.net_price(100) << endl;
cout << "1.)---------------------------" << endl;
// copies into the vector
// only copies quote parts
vq.push_back(q);
vq.push_back(bq);
cout << vq[1].net_price(100) << endl;

cout << "2.)---------------------------" << endl;
vbq.push_back(bq);
cout << vbq[0].net_price(100) << endl;
// consistent result
//vbq.push_back(q);
// fail as no constructor to construct bulk_quote from quote

cout << "3.)---------------------------" << endl;
vqp.push_back(&q);
vqp.push_back(&bq);
cout<< vqp[1]->net_price(100) << endl;
// (Bulk_quote *) -> (Quote *)
// but dynamic binding took aplace


cout << "4.)---------------------------" << endl;
//vbqp.push_back(&q);
// fail as (Quote *) -> (Bulk_quote *) is not possible
vbqp.push_back(&bq);






cout << "-### cleanup.)---------------------------" << endl;


}
