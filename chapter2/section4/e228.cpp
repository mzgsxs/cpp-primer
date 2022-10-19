#include <iostream>

int main() 
{
  //int i, *const cp; // illegal, must be initialized
  //int *p1, *const p2; // illegal
  //const int ic, &r = ic; // illegal
  const int ic = 3, &r = ic; // 
  //const int *const p3; // illegal
  const int *const p3 = &ic; // top & bottom level const, must be initialized
  const int *p; // top-level non-constant, ok not initialized
  return 0;
}
