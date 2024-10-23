#ifndef SALES_DATA_H 
#define SALES_DATA_H

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
    read(is); // read will read a transaction from is into this object 
  }

  std::istream & read(std::istream & is);
  std::string isbn() const { return bookNo; } 
  /*
  // this is identical to
  std::string Sales_data::isbn(Sales_data const * const this){
    return this->bookNo;
  }
  */

  Sales_data & combine(Sales_data const &);
};

#include <iostream>


inline bool operator == (Sales_data const & s1, Sales_data const & s2)
{
  return s1.isbn() == s2.isbn();
}

inline bool operator < (Sales_data const & s1, Sales_data const & s2)
{
  return s1.isbn() < s2.isbn();
}

inline bool compareIsbn(Sales_data const & s1, Sales_data const & s2)
{
  return s1 < s2;
}



std::istream & Sales_data::read(std::istream & is){
  static double unit_price;
  is >> bookNo >> units_sold >> unit_price;
  revenue = units_sold * unit_price;
  return is;
}

std::istream & read(std::istream & is, Sales_data & data){
  return data.read(is);
}

std::istream & operator >> (std::istream & is, Sales_data & data)
{
  return read(is, data);
}



std::ostream & operator << (std::ostream & os, Sales_data const & data){
   os << 
   data.bookNo     << " |\t " << 
   data.units_sold << " |\t " <<
   data.revenue;
   return os;
}

std::ostream & print(std::ostream & os, Sales_data const & sd){
  return os << sd; 
}



Sales_data & Sales_data::combine(Sales_data const & rhs){
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data operator + (Sales_data const & sd1, Sales_data const & sd2){
  Sales_data sum = sd1;
  return sum.combine(sd2);
}

Sales_data add(Sales_data const & sd1, Sales_data const & sd2){
  return sd1+sd2;
}


#endif
