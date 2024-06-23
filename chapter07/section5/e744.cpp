#include<vector>

#include <string>
#include <iostream>

class NoDefault {
public:
  NoDefault(std::string const & s): content(s){}
  std::string content; 
};

int main(){
  //std::vector<NoDefault> vec(10);
  // illegal, as no default
  std::vector<NoDefault> vec1{NoDefault(""),NoDefault("")}; //ok
  std::vector<std::string> vec2{"",""}; //ok
  // not ok
  //std::vector<NoDefault> vec3{"",""};
}
