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
  int ret = 1; 
  while(val>1)
    ret*=val--;
  return ret;
}



int main() 
{
  int i;
  cin >> i;
  int v = fact(i);
  cout << v << endl;
  

  return 0;
}

