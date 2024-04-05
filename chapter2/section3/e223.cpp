#include <iostream>

int main() 
{
  int i = 3.114;
  int * p = &i, * punInit, * pnull = nullptr; 
  if (p){std::cout << "pointer true" << std::endl;} 
  if (punInit){std::cout << "un-initialized pointer true" << std::endl;} 
  if (pnull){std::cout << "null pointer true" << std::endl;} // not true
  return 0;
}
