#include <iostream>

int main() 
{
  //const int buf; // illegal, must be initialized
  int cnt = 0; // ok
  const int sz = cnt; // ok
  ++cnt; // ok
  //++sz; // illegal
  return 0;
}
