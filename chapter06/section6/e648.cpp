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

#include<cassert>

int main() 
{
  // it asks the user to input a word till it matches the desired word
  string s;
  string sought = "key";
  while (cin >> s && s != sought) { } // empty body 
  // it checks if cin is in valid state
  assert(cin);
}

