#include <iostream>

int main() 
{
  //int const buf; // illegal, must be initialized
  int cnt = 0; // ok
  int const sz = cnt; // ok
  ++cnt; // ok
  //++sz; // illegal
  return 0;
}
