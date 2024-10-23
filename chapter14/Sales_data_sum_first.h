#ifndef SALES_DATA_H 
#define SALES_DATA_H

#include <iostream>
#include <string>


struct Sales_data {
  // by default, all members are public for "struct"
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  // constructors
  Sales_data(): units_sold(0), revenue(0.) {std::cout << "new sales data" << std::endl;};
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

  Sales_data & operator += (Sales_data const &);
};



inline bool operator == (Sales_data const & s1, Sales_data const & s2)
{
  return s1.isbn() == s2.isbn();
}


inline bool compareIsbn(Sales_data const & s1, Sales_data const & s2)
{
  return s1.isbn() < s2.isbn();
}

inline bool operator < (Sales_data const & s1, Sales_data const & s2)
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


std::ostream & print(std::ostream & os, Sales_data const & data){
   os << 
   data.bookNo     << " |\t " << 
   data.units_sold << " |\t " <<
   data.revenue;
   return os;
}

std::ostream & operator << (std::ostream & os, Sales_data const & data){
  return print(os, data); 
}


Sales_data operator + (Sales_data const & lhs, Sales_data const & rhs){
  Sales_data sum;
  // we have to assign bookNo manually
  sum.bookNo = (lhs.bookNo == rhs.bookNo)? lhs.bookNo:"different book"; 
  sum.units_sold = lhs.units_sold + rhs.units_sold; 
  sum.revenue = lhs.revenue + rhs.revenue; 
  return std::move(sum);
}

Sales_data & Sales_data::operator+=(Sales_data const & sd){
  //return std::move(*this+sd2);
  // but returned object does not refer to "this"

  // we will have to define it manually
  //this->units_sold += sd.units_sold; 
  //this->revenue += sd.revenue; 
  //return *this;
  
  // or we have to copy it
  *this = std::move(*this+sd);
  return *this;
}




#endif
