#ifndef SALES_DATA_REVISED_H 
#define SALES_DATA_REVISED_H
#include <string>

struct Person {
  std::string _name_ = "mu";
  std::string _address_ = "home";

  Person() = default;

  std::string const & name() const { return _name_; }
  std::string const & address() const { return _address_; }
};


#include <iostream>
std::istream & read(std::istream & is, Person & p){
  is >> p._name_ >> p._address_;
  return is;
}

std::ostream & print(std::ostream & os, Person const & p){
   os << 
   p.name()     << " |\t " << 
   p.address() << " |\t " <<
   std::endl;
   return os;
}
#endif
