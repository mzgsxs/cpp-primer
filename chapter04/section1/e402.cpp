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
  vector<int> vec(10,1);
  cout << * ((vec.begin)()) << endl;
  cout << ((* ((vec.begin)())) + 1) << endl;

  return 0;
}


