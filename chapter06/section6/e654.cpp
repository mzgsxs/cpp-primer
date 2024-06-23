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

int foo (int const i1, int const i2){return 0;}

typedef decltype(foo) *pfooT;
int main() 
{
  int (* pfoo) (int const i1, int const i2);
  // pfoo have the type of "pointer to function foo"
  // uninitialised
  pfoo = &foo;
  cout << (*pfoo)(1,1) << endl;
  cout << pfoo(1,1) << endl;

  vector<int> vi; 
  vector<pfooT> vpfoo;
}

