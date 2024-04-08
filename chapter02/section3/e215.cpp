#include <iostream>

int main() 
{
  int ival = 1.01;
  int& rval2 = ival;
  //int& ival1 = 1.01; //illegal
  int& rval3; //illegal
  return 0;
}
