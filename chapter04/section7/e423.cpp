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
  string s = "word";
  string pl = s + ((s[s.size() - 1] == 's') ? "" : "s" );

  return 0;
}


