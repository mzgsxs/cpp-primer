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
  string s, line;
  while( getline(cin, line) ) s += (line +'\n');
  cout << s << endl;
  for (auto i = s.begin(); *i != '\n'; ++i){
    *i = toupper(*i);
  }
  cout << s << endl;

  return 0;
}
