#include <iostream>

int main() 
{
  unsigned u=10, u2=42;
  int i=10, i2=42;
  std::cerr << u2-u << std::endl;
  std::cerr << u-u2 << std::endl;
  std::cerr << i2-i << std::endl;
  std::cerr << i-i2 << std::endl;
  std::cerr << i-u << std::endl;
  std::cerr << u-i << std::endl;

  return 0;
}
