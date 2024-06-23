#include<vector>

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
  //std::vector<NoDefault> vec(10);
  // illegal, as no default
  std::vector<NoDefault> vec1{NoDefault(""),NoDefault("")}; //ok
  std::vector<std::string> vec2{"",""}; //ok
  // not ok
  //std::vector<NoDefault> vec3{"",""};
  std::vector<C> vec4(2); // clearly ok
}
