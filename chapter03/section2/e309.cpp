#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string s;
  cout << s[0] << endl;
  cout << s.size() << endl;
  // valid! but is it safe?
  // size of 0
  return 0;
}
