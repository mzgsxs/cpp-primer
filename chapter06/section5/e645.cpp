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

#include<stdexcept>
using std::exception;
using std::runtime_error;


inline int fact(int val)
{
  int ret = 1; 
  while(val>1)
    ret*=val--;
  return ret;
}
// not really suitable for inline
// while loop


inline int abs(int val)
{
  return (val>0)? val: -val;
}
// def. inline


int foo()
{
  static bool first_time(true);
  static int v = 0;
  if (first_time) {
    first_time = false;
    return 0;
  }
  return ++v;
}
// maybe inclineable


inline void reset (int & i){
  i = 0;
}
// def inline 


int main() 
{

  cout << fact(5) << endl;

  return 0;
}

