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


void fr(int & ri){}
// a reference to i, changes to ri will change values of i

void fv(int j){}
// a copy of i, changes to j will have no effect to i 

int main() 
{
  // void f(T)

  int i = 1;
  fr(i);
  fv(i);

  return 0;
}

