#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  unsigned i;
  string s;
  getline(cin, s);
  for (char & c : s) // storage of a string is required to be continuous
    if ( ispunct(c) ) {
      char * lc = &c, * lo = &s[0];
      cout << static_cast<void *>(lc) << "|" << static_cast<void *>(lo)  << endl;
      cout << lc - lo  << endl;
      cout << &c - &s[0]  << endl;
      cout <<  sizeof(c) << endl;
      cout <<  (&c - &s[0])/sizeof(c) << endl;
      i = (&c - &s[0])/sizeof(c);
      s.erase(s.begin()+i);
    } ;
  cout << s << endl;

  return 0;
}
