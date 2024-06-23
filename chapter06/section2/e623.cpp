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

void print_int(int const & i){
  cout << i << endl;
}

void print_int_array(size_t const & size, int const ai[]){
//void print_int_array(size_t const & size, int const (& ai)[5]){
// a reference to array must have fixed/pre-specified size 
  for (size_t i = 0; i < size; i++) cout << ai[i] << endl;  
}

int main() 
{

  int i = 0, ai[5] = {5,4,3,2,1};
  print_int(i);
  print_int_array(5, ai);

  return 0;
}

