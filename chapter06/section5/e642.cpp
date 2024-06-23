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

string make_plural(size_t ctr, const string & word = "example",
                               const string & ending = "s")
{
  return (ctr > 1) ? word + ending : word;
}


int main() 
{
  cout << make_plural(100) << endl;
  cout << make_plural(1, "success") << endl;
  cout << make_plural(2, "success") << endl;
  return 0;
}

