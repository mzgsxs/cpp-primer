#include <iostream>

int main() 
{
  int i = 0;
  double *dp = &i; // illegal, type mismatch
  int *ip = i; // illegal 
  int *p = &i; // ok
  return 0;
}
