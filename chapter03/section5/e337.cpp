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
  char const ca[] = {'h', 'e', 'l', 'l', 'o'};
  char const * cp = ca;

  cout << sizeof(ca) << endl;
  cout << sizeof(cp) << endl;

  // it prints out the chars till null
  while(*cp) {
    cout << *cp << endl;
    ++cp;
  } 

  return 0;
}


