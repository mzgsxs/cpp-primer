#include <iostream>

int main() 
{
  int a = 3, b = 4;
  decltype(a) c = a; // int
  decltype((b)) d = a; // int &
  ++c; 
  ++d; // d is alias to a, so a increase by 1
  return 0;
}
