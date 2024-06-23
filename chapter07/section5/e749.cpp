#include<string>
#include<iostream>
class Sales_data {
public:
  Sales_data(std::string const & s): bookNo(s) { std::cout << "c1" << std::endl;}
  Sales_data(std::string s, unsigned cnt, double rev):
    bookNo(s), units_sold(cnt), revenue(rev*cnt) { std::cout << "c2" << std::endl;}
  Sales_data(std::istream & is = std::cin) { is >> bookNo; std::cout << "c3" << std::endl;}

  //Sales_data &combine(Sales_data) { std::cout << "m1" << std::endl;}
  //string -> Sales_data 

  Sales_data &combine(Sales_data &) { std::cout << "m2" << std::endl;}
  //string -> Sales_data(temp)
  // getting ref of a tempory, error
  // if use i.combine(Sales_data(s));
  // explicit string -> Sales_data(temp)
  // !!! can not get ref of temporary 
 
  //Sales_data &combine(Sales_data const &) const { std::cout << "m3" << std::endl;}
  //string -> Sales_data -> ref Sales_data
  // if use i.combine(Sales_data(s));
  // explicit string -> Sales_data(temp)
  // implicit Sales_data(temp) -> ref of it OK!!! 
  
  std::string bookNo = "";
  int units_sold = 0;
  double revenue = 0.;
};


int main() {
  Sales_data i("string");
  std::string s("string");
  i.combine(s);
  //i.combine(Sales_data(s));
}
