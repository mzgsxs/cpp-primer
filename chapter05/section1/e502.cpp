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
  string s = "string";
  {
    string ss = s+s;
    cout << ss << endl;
  }
  //cout << ss << endl; // out of scope now!
  return 0;
}


