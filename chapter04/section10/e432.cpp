#include <iostream>

#include <string>
#include <cstring>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;

using std::begin;
using std::end;

int main()
{
  constexpr int size = 5;
  int ia[size] = {1,2,3,4,5};
  for (int * ptr = ia, ix = 0;
       ix != size && ptr != ia+size; 
       ++ix,++ptr) {/* ... */}
  // iterate over array
}


