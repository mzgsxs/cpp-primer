
#include<string>
#include<iostream>
#include<sstream>

struct PrintString{
  std::string operator()(std::istream & is){
    if (getline(is, s))
      return s;
    else
      return std::string();
  }
  std::string s;
};


int main (int argc, char** argv){
PrintString ps;
std::cout << ps(std::cin) << std::endl;
}
