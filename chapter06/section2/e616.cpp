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

bool is_empty(const string& s) { return s.empty(); }
// it should be const string &
// otherwise it won't accept const argument

int main() 
{
  
  const string s = "this is a string";
  //string s = "";
  cout << is_empty(s) << endl;
  return 0;
}

