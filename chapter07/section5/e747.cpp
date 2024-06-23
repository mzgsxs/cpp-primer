#include<string>
#include<iostream>
class Sales_data {
public:
  // c1
  Sales_data(std::string s = ""): bookNo(s) { }
  /*
  not necessary to make it explicit
  pros:
    more flexible
  cons:
    ambigous and potential bug prone
  */
  // c2
  Sales_data(std::string s, unsigned cnt, double rev):
    bookNo(s), units_sold(cnt), revenue(rev*cnt) { }
  // c3
  //Sales_data(std::istream &is) { read(is, *this); }
  explicit Sales_data(std::istream & is = std::cin) { is >> bookNo;}
// ...
//private:
  std::string bookNo;
  int units_sold;
  double revenue;
};


Sales_data first_item(std::cin);

int main() {
  // legal but ambigous default, meaningless 
  Sales_data next("string"); // c1
  std:: cout << next.bookNo << std::endl;
  // unless we make it explicit
  Sales_data middle(std::cin); // c1
  std:: cout << middle.bookNo << std::endl;
  Sales_data last("9-999-99999-9"); // c1
  std:: cout << last.bookNo << std::endl;
}
