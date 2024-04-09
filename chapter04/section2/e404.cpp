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
  cout << 12/3*4 + 5*15 + 24%4/2 << endl; 
  cout << ((((12/3)*4) + (5*15)) + ((24%4)/2)) << endl; //!!! multiplication division before remainder!!! 
  cout << ((((12/3)*4) + (5*15)) + (24%(4/2))) << endl; 

  return 0;
}


