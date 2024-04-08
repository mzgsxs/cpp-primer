#include <iostream>

int main() 
{
  //int i, *const cp; // illegal, must be initialized
  //int *p1, *const p2; // illegal
  //int const ic, & r = ic; // illegal
  int const ic = 3, & r = ic; // 
  //int const *const p3; // illegal
  int const *const p3 = &ic; // top & bottom level const, must be initialized
  int const *p; // top-level non-constant, ok not initialized
  return 0;
}
