#include <iostream>

int main() 
{
  int i = 3.114;
  int *p = &i; // ok
  if (p){std::cout << "pointer true" << std::endl;} // true as long as p is non-nullptr
  if (*p){std::cout << "dereference true" << std::endl;} 
  return 0;
}
