
#include<string>
#include<iostream>

std::istream & foo(std::istream & isr){
  std::string word;
  while (isr >> word){
    std::cout << word << std::endl;
    //isr.setstate(std::istream::badbit);
    //isr.setstate(std::istream::failbit);
    //isr.setstate(std::istream::eofbit);
    isr.setstate(std::istream::goodbit);
  }
  isr.clear();
  return isr;
}

int main(){
  foo(std::cin);
}
