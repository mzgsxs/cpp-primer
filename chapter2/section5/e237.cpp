#include <iostream>

int main() 
{
  int a = 3, b = 4;
  double e = 3.14;
  decltype(a) c = a; // int
  decltype(a+b) d1 = a; // int, 
  decltype(a=b) d2 = a; // int &, 
  decltype(e+b) d3 = 0.1; // double, 
  decltype(e=b) d4 = 0.1; // double &, 
  decltype(a=b+e) d5 = 0.1; // int &, 
  std::cout << a << b << c << std::endl;
  std::cout << d1 << d2 << d3 << d4 << std::endl;
  return 0;
}
