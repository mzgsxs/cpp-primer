#include <iostream>

int main() 
{
  //int i = -1;
  int const i2 = 313;

  //int i = -1, & r = 0; // bad, reference can not be initialized by literal if base type is not const 
  //int *const p2 = &i2; // bad, only if i2 is int, not const int
  int const i = -1, & r = 0; // ok
  int const *const p3 = &i2; // ok nomatter i2 is int or const int
  int const * p1 = &i2; // ok  
  //int const &const r2; // illegal, must be initialized
  int const i3 = i, & r2 = i; // ok, but r can not do assign op 
  return 0;
}
