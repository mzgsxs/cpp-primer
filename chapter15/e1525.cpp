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
  //virtual ~Quote() = default; // dynamic binding for the destructor
  virtual void debug() const {
    cout << "debug for quote" << endl;
  }
  virtual int get_test(){return 0;}
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
  int get_test() override {return test;}
  int test=42;
};


int main(int argc, char** argv){
/*
destructor must be defined as virtual
as if we have a pointer to base
*/

Bulk_quote bq;

Quote * qp = new Bulk_quote();
cout << qp->get_test() << endl;
delete qp;
//cout << qp->get_test() << endl;

/*
In this case if destructor is not a virtual function
delete qp will only delete base part of qp

*/




/*
if Disc_quote didn't define constructor, then Bulk_quote default constructor
will be implicitly delected.

Bulk_quote bq;// error

default constructor will not be synthesised because 
 non-default constructor was defined

move&copy constructor been synthesized

*/

/*
Bulk_quote bq;
Quote * qp = new Bulk_quote();
delete qp;
*/
}
