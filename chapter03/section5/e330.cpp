#include <iostream>

#include <string>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;

int main()
{
  constexpr size_t array_size = 10;
  int ia[array_size];
  // should be 0 to <
  //for (size_t ix = 1; ix <= array_size; ++ix)
  //  ia[ix] = ix;
  for (size_t ix = 0; ix < array_size; ++ix)
    ia[ix] = ix;
  return 0;
}


