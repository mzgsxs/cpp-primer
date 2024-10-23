#include<iostream>
using std::ostream;

class Quote {
public:
  Quote() = default; 
  Quote(const std::string &book, double sales_price):
    bookNo(book), price(sales_price) { }
  std::string isbn() const { return bookNo; }
  virtual double net_price(std::size_t n) const
    { return n * price; }
  virtual ~Quote() = default; // dynamic binding for the destructor
private:
  std::string bookNo; // ISBN number of this item
protected:
  double price = 0.0; // normal, undiscounted price
};

class Bulk_quote : public Quote { // Bulk_quoteinherits from Quote
public:
  double net_price(std::size_t) const override;
};

double print_total(ostream & os,Quote const & item, size_t n)
{
  double ret = item.net_price(n);
  os << "ISBN: " << item.isbn() // calls Quote::isbn
  << " # sold: " << n << " total due: " << ret << endl;
  return ret;
}
