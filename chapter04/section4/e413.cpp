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
  int i;
  double d;
  d = i = 3.5;
  cout << d << "|" << i << endl;
  i = d = 3.5;
  cout << d << "|" << i << endl;
  return 0;
}


