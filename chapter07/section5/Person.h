#ifndef SALES_DATA_REVISED_H 
#define SALES_DATA_REVISED_H
#include <string>

class Person {
  // friend functions are not affected by access control specifiers
  friend std::istream & read(std::istream & is, Person & p);
  //friend std::ostream & print(std::ostream & os, Person const & p);

  private:
    std::string _name_ = "mu";
    std::string _address_ = "home";
  
  public:
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
