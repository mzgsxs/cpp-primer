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
  // pointer have size of 64bit for a 64bit system!
  cout << sizeof(int) << endl;
  cout << sizeof(int *) << endl;
  cout << sizeof(char) << endl;
  cout << sizeof(char *) << endl;
  cout << sizeof(bool) << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(float *) << endl;
  cout << sizeof(double) << endl;

}


