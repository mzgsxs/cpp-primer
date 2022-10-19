#include <iostream>

int main() 
{
  const int v2 = 0; //low-level
  int v1 = v2; //not const
  v1++;
  int *p1 = &v1; // not const
  int &r1 = v1; // not const
  const int *p2 = &v2; //low-level, p2 can re-point 
  int i = 13;
  const int *const p3 = &i; //both
  const int &r2 = v2; //low-level

  return 0;
}
