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
  cout <<  -30*3 + 21/5 << endl; // -85.8 | -86
  cout << -30 + 3*21/5  << endl; // -17.4 | -18
  cout << 30/3*21%5 << endl; // 42 | 0 multiplication first!
  cout << (30/3*21)%5 << endl; // 42 | 0 multiplication first!
  cout <<  -30/3*21%4 << endl; // -52.5 | -2
  cout <<  (-30/3*21)%4 << endl; // -52.5 | -2

  return 0;
}


