#include <iostream>

int main() 
{
  int i = 42;
  int * pi = &i;
  std::cout << i << " " << *pi << std::endl;
  *pi = *pi * *pi;
  std::cout << i << " " << *pi << std::endl;
  return 0;
}
