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

void reset (int & i){
  i = 0;
}


int main() 
{
  
  int i = 10;
  cout << i << endl;
  reset(i);
  cout << i << endl;

  return 0;
}

