#include <iostream>

#include <string>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;


int main()
{
  vector<int> vi(10,1);
  vector<int> const cvi = vi;
  //vector<int const> const cvi2 = vi; // illegal

  int ai[10] = {1};
  int const aci[10] = {1}; // no need for constant array?
  //int const [10]aci2 = {1}; // illegal

  // array  : fixed size, no iterators, faster, no copy or assign init, 
  // vector : mutable size, iterators, slower, copy or assign init ok,

  int * api[10]; // array of pointers
  int (* pai)[10]; // pointer to array
  int (& rai)[10] = ai; // reference to array
  return 0;
}


