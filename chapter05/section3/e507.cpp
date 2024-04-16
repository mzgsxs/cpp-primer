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

int get_value(){return 100;}



int main()
{
  int ival1 = 1;
  int ival2 = 2;
  if (ival1 != ival2) 
    ival1 = ival2; // need semicolon
  else ival1 = ival2 = 0;

  int minval = 10, occurs = 0;
  if (ival1 < minval) // need block or comma
    minval = ival1, occurs = 1;

  if (int ival = get_value())
    cout << "ival = " << ival << endl; 
  else if (!ival) // need else
    cout << "ival = 0\n";

  int ival;
  // warning: using the result of an assignment as a condition without parentheses [-Wparentheses]
  // if (ival = 0) ...
  if ((ival = 0)) // always false!
    ival = get_value();

 
  cout << endl;
  return 0;
}


