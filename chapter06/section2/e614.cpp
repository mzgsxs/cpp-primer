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

void foo(int const & i){}
// when we dont want this function to modify i


void foo2(int & i){}
// when we want to modify i


int main() 
{
  return 0;
}

