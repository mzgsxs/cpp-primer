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


int abs(int val)
{
  return (val>0)? val: -val;
}



int main() 
{
  int i;
  cin >> i;
  int v = abs(i);
  cout << v << endl;

  return 0;
}

