#include <iostream>

int main() 
{
  //int i, *const cp;  
  int i=13, *const cp=&i; // illegal, must be initialized
  //int *p1, *const p2; 
  int * p1=&i, *const p2=&i; // illegal, must be initialized
  //int const ic, & r = ic; 
  int const ic = 3, & r = ic; // 
  //int const *const p3; // illegal
  //int const *const p3 = &ic; // top & bottom level const, must be initialized
  int const *const p3 = &i; // can point to psuedo const, i.e. p3 can not reassign i, but i can change
  std::cout << i << " " << *p3 << std::endl;
  ++i;
  //++*p3; // illegal
  std::cout << i << " " << *p3 << std::endl;
  int const * p; // top-level non-constant, ok not initialized

  i = ic; // ok
  //p1 = p3; // illegal, can not copy *const to *
  //p1 = &ic; // illegal, int * can not convert to const int *
  //p3 = &i // illgeal, *const can not be reassigned
  //p2 = p1; // illegal, p2 is *const
  //ic = *p3; // illegal, ic is const

  return 0;
}
