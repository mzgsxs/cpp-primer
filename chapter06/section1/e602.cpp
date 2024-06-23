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


string f() { 
  string s;
  // . . .
  return s; 
} // bad, no conversion from string to int

void f2(int i){/* ... */}
// type specifier is needed 

//int calc(int v1,int v1)/* ... */}
// bad, two parameters have the same name

double square(double x) {return x * x;}
// need to have a block


int main() 
{
  square(2);
  return 0;
}

