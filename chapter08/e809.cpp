
#include<string>
#include<iostream>
#include<sstream>

std::istringstream & foo(std::istringstream & isr){
  std::string word;
  while (isr >> word){
    std::cout << word << " ";
  }
  std::cout << std::endl;
  isr.clear();
  return isr;
}

int main(){
  std::istringstream iss("fqwf fqwf wqfwqf cklns\n sfas");
  foo(iss);
}
