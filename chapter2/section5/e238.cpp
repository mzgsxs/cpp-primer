#include <iostream>

int main() 
{
  int a = 3;
  const int b = 4;
  double e = 3.14;

  auto c = a; // int
  decltype(a) d = a; // int

  auto f = b; // int
  decltype(b) g = b; // const int
  f = 5;
  g = 5;

  return 0;
}
