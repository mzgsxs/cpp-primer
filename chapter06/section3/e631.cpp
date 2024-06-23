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

// when return a reference to non-local variable

//int & foo(int & i){
//int & foo(int const & i){
// it has return const ref
int const & foo(int const & i){
  return i;
}

int main() 
{
  int i = 10;
  //foo(i) = 11;
  cout << foo(i) << endl;
  return 0;
}

