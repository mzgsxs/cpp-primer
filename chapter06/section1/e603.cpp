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


int fact(int val)
{
  int ret = 1; // local variable to hold the result as we calculate it 
  while (val > 1)
    ret*=val--; // assignret*valtoretanddecrementval
  return ret; // return the result
}



int main() 
{
  int v = fact(3);
  cout <<v << endl;
  

  return 0;
}

