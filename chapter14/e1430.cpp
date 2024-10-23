
#include<string>
#include<iostream>
#include<sstream>

#include"StrBlob.h"
#include"StrBlobPtr.h"
#include"ConstStrBlobPtr.h"
int main (int argc, char** argv){
  StrBlob a1{"a string", "bye", "now"};
  StrBlobPtr p(a1);
  std::cout << p->size() << std::endl;
  std::cout << p.operator*() << std::endl;

  ConstStrBlobPtr cp(a1);
  std::cout << cp->size() << std::endl;
  std::cout << cp.operator*() << std::endl;


}
