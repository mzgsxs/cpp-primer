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


//string (& foo(string as[]))[]{
  // as is viewed as string * now
string (& foo(string (& as)[]))[]{
  string (& as2)[] = as;
  return as2;
}

int main() 
{

  return 0;
}

