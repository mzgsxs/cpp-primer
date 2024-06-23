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

int greater(int i, int * pi){
  return (i>*pi)?i:*pi;
}

int main() 
{

  int j = 13;
  int * pi = &j;
  cout << greater(15, pi) << endl;

  return 0;
}

