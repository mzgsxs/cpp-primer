#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string const s("dqwdqw,dqwd qwkdo");
  //for (char & c : s){/**/}// illegal char& vs char const &
  for (char const & c : s){/**/}// illegal char& vs char const &
  cout << s << endl;

  return 0;
}
