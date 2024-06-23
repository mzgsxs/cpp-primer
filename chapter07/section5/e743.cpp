
#include <string>
#include <iostream>

class NoDefault {
public:
  NoDefault(std::string const & s): content(s){}
  std::string content; 
};

class C {
public:
  NoDefault m; // this is legal as it's inside class
  C(): m(""){} //
};

int main(){
  //NoDefault m; // this is illegal
  C c;
}
