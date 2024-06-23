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

string::size_type find_char(string const & s, char c,
                            string::size_type &occurs){}

// we dont want to modify s, but occurs is the out put which we want to store data into it
// c is not a reference as a literal was passed as the argument, references can not bind to temporaries 
// if occurs is const, the output is useless

int main() 
{
  return 0;
}

