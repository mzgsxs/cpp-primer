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
  // ok, enough to hold all 32 bits
  unsigned int quiz1 = 0;
  quiz1 |= 1U << 27;
  //quiz1 = quiz1 | 1U << 27;
  //quiz1 &= ~(1U << 27);
  bool status = quiz1 & (1U << 27);
  cout << status << endl;
  return 0;
}


