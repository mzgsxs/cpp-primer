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
  int x[10];   int * p = x;
  cout << sizeof(x)/sizeof(*x) << endl; // 40/4 -> 10 
  cout << sizeof(p)/sizeof(*p) << endl; // pointer have size 64bit! 8/4 -> 2
}


