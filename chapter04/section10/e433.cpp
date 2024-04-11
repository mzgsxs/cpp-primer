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
  // someValue ? ++x, ++y : --x, --y 
  int x = 13, y = 21;
  //true ? ++x, ++y : --x, --y;
  (true ? (++x, ++y) : --x), --y; // same as this
  cout << x << "|" << y <<endl;
}


