#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  if ( s1 == s2) {
    cout << "Identical strings" << endl;
  } else {
    cout << ((s1>s2)?s1:s2) << " string is greater"  << endl;
    cout << ((s1.size()>s2.size())?s1:s2) << " string is longer"  << endl;
  }
  return 0;
}
