#ifndef SALES_DATA_REVISED_H 
#define SALES_DATA_REVISED_H

#include <string>


struct Sales_data {
  // by default, all members are public for "struct"
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  // constructors
  Sales_data(): units_sold(0), revenue(0.) {};
  Sales_data(std::string const & s): bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p):
    bookNo(s), units_sold(n), revenue(p*n) { }  
  Sales_data(std::istream & is) {
    read(is, *this); // read will read a transaction from is into this object 
  }

  std::istream & read(std::istream & is, Sales_data & data);
  std::string isbn() const { return bookNo; } 
  /*
  // this is identical to
  std::string Sales_data::isbn(Sales_data const * const this){
    return this->bookNo;
  }
  */

  Sales_data & combine(Sales_data const &);
};

Sales_data & Sales_data::combine(Sales_data const & rhs){
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}



#include <iostream>
std::istream & Sales_data::read(std::istream & is, Sales_data & data){
  static double unit_price;
  is >> data.bookNo >> data.units_sold >> unit_price;
  data.revenue = data.units_sold * unit_price;
  return is;
}


std::istream & read(std::istream & is, Sales_data & data){
  static double unit_price;
  is >> data.bookNo >> data.units_sold >> unit_price;
  data.revenue = data.units_sold * unit_price;
  return is;
}



std::ostream & print(std::ostream & os, Sales_data const & data){
   os << 
   data.bookNo     << " |\t " << 
   data.units_sold << " |\t " <<
   data.revenue    <<
   std::endl;
   return os;
}

Sales_data add(Sales_data const & sd1, Sales_data const & sd2){
  Sales_data sum = sd1;
  return sum.combine(sd2);
}

#endif
