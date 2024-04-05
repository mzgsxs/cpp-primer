#include <iostream>

int main() 
{
  int const i = 42;
  auto j = i; // int
  auto const & k = i; // int const &
  auto * p = &i; // int *
  auto const j2 = i, & k2 = i; // const int, const int &
  return 0;
}
