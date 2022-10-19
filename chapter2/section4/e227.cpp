#include <iostream>

int main() 
{
  //int i = -1;
  const int i2 = 313;

  //int i = -1, &r = 0; // reference can not be initialized by literal if base type is not const 
  //int *const p2 = &i2; // ok if i2 is int, not const int
  const int i = -1, &r = 0; // ok
  const int *const p3 = &i2; // ok nomatter i2 is int or const int
  const int *p1 = &i2; // ok  
  //const int &const r2; // illegal, must be initialized
  const int i3 = i, &r2 = i; // ok, but r can not do assign op 
  return 0;
}
