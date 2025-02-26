#include<string>
#include<iostream>
class Sales_data {
public:
  // c1
  Sales_data(std::string s = ""): bookNo(s) { }
  // c2
  Sales_data(std::string s, unsigned cnt, double rev):
    bookNo(s), units_sold(cnt), revenue(rev*cnt) { }
  // c3
  //Sales_data(std::istream &is) { read(is, *this); }
  Sales_data(std::istream &is) { }
// ...
//private:
  std::string bookNo;
  int units_sold;
  double revenue;
};


Sales_data first_item(std::cin);

int main() {
  Sales_data next; // c1
  std:: cout << next.bookNo << std::endl;
  Sales_data last("9-999-99999-9"); // c1
  std:: cout << last.bookNo << std::endl;
}
