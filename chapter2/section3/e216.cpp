#include <iostream>

int main() 
{
  int i = 0, & ri = i;
  double d = 0, & rd = d;
  std::cout << i << d << std::endl;
  rd = 3.14; // ok
  std::cout << i << d << std::endl;
  rd = ri; // ok
  std::cout << i << d << std::endl;
  i = rd; // ok
  std::cout << i << d << std::endl;
  ri = d; // ok 
  std::cout << i << d << std::endl;
  return 0;
}
