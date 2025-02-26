#include <iostream>

int main() 
{
  int const v2 = 0; //low-level
  int v1 = v2; //not const
  v1++;
  int * p1 = &v1; // not const
  int & r1 = v1; // not const
  int const * p2 = &v2; //low-level, p2 can re-point 
  int i = 13;
  int const *const p3 = &i; //both
  int const & r2 = v2; //low-level

  r1 = v2; // ok, it is actually doing v1 = v2
  std::cout << r1 << std::endl; 
  //p1 = p2; // illegal, both with high-level *, but low-level is const int to int
  p2 = p1; // ok
  //p1 = p3; // illegal
  int const *const p4 = p2; // ok, high-level conversion of * to *const
  p2 = p3; // ok, high-level conversion of *const to *

  return 0;
}
