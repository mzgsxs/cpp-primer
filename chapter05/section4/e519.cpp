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
  string s1, s2;
  do {
    cin >> s1 >> s2;
    string s = (s1>s2)? "s1 greater":"s2 greater";
    cout << s << endl;
  } while (true) ;

  return 0;
}


