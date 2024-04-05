#include <iostream>

int main() 
{
  int i = 0, & r = i;
  auto a = r;
  a = 42; // int, ok
  int const ci = i, & cr = ci;
  auto b = ci;
  b = 42; // int ok
  auto c = cr;
  c = 42; // int ok
  auto d = &i;
  d = 42; // type mis-match, not ok
  auto e = &ci;
  e = 42; // const int * not ok
  auto & g = ci;
  g = 42; // const int & not ok
  return 0;
}
