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



int main() 
{
  int i = foo();
  cout << i << endl;

  i = foo(); 
  cout << i << endl;

  i = foo(); 
  cout << i << endl;

  i = foo(); 
  cout << i << endl;
  return 0;
}

