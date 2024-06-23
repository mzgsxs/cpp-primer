#include<string>
#include<iostream>
class Sales_data {
public:
  explicit Sales_data(std::string const & s): bookNo(s) { std::cout << "c1" << std::endl;}
  Sales_data(std::string s, unsigned cnt, double rev):
    bookNo(s), units_sold(cnt), revenue(rev*cnt) { std::cout << "c2" << std::endl;}
  Sales_data(std::istream & is = std::cin) { is >> bookNo; std::cout << "c3" << std::endl;}
// ...
  std::string bookNo;
  int units_sold;
  double revenue;
};


int main() {
  std::string null_isbn("9-999-99999-9");

  Sales_data item1(null_isbn);
  Sales_data item2("9-999-99999-9");
  // both uses c1 if not explicit
}
