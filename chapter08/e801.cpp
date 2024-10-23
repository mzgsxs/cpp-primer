
#include<string>
#include<iostream>

std::istream & foo(std::istream & isr){
  std::string word;
  while (isr >> word){
    std::cout << word;
  }
  isr.clear();
  return isr;
}

int main(){
  foo(std::cin);
}
