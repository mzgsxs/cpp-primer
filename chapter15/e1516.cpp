#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

class Quote {
public:
  Quote() = default; 
  Quote(const std::string &book, double sales_price):
    bookNo(book), price(sales_price) { }
  std::string isbn() const { return bookNo; }
  virtual double net_price(std::size_t n) const
    { return n * price; }
  virtual ~Quote() = default; // dynamic binding for the destructor
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
  Disc_quote(const std::string& book, double price,
  std::size_t qty, double disc):
  Quote(book, price),
  quantity(qty), discount(disc) { }
  double net_price(std::size_t) const = 0;
protected:
  std::size_t quantity = 0; // purchase size for the discount to apply
  double discount = 0.0; // fractional discount to apply
};


class Bulk_quote : public Disc_quote {
std::size_t min_qty = 0;
public:
  Bulk_quote() = default;
  Bulk_quote(const std::string& book, double price,
             std::size_t qty, double disc):
    Disc_quote(book, price, qty, disc) { }
  // overrides the base version to implement the bulk purchase discount policy
  double net_price(std::size_t n) const override{
    float factor = 1;
    cout << "bulk discount applied" << endl;
    if (100>=n>=min_qty) {
      factor = discount;
    } else if (n>100) {
      factor = ((n-100)+100*discount)/n;
    }
    cout << factor << endl;
    return n*price*factor;
  }
};


int main(int argc, char** argv){
//Quote q("a book", 10.99);
// we can not use quote as it's not implemented
Bulk_quote bq("another book", 12.99, 10, 0.95);
bq.debug();
// the following will fail as it's abstruct class
//Disc_quote dq("another book", 12.99, 10, 0.95);

}
