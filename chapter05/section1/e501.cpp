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
  string s;
  string sought = "target";
  while (cin >> s && s != sought); // null statement
  return 0;
}


