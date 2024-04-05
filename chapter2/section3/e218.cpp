#include <iostream>

int main() 
{
  double dval = 3.1415;
  double * dp = &dval;
  std::cout << dp << " " << *dp << std::endl;
  *dp = 0;
  std::cout << dp << " " << *dp << std::endl;
  dp = 0;
  std::cout << dp << " " << std::endl;
  return 0;
}
