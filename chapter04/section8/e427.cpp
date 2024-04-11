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

  unsigned long ul1 = 3, ul2 = 7;
  // ... 00000011
  // ... 00000111
  cout << (ul1 & ul2 ) << endl;  
  cout << (ul1 | ul2 ) << endl; 
  cout << (ul1 && ul2) << endl; 
  cout << (ul1 || ul2) << endl; 

  return 0;
}


