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

int main()
{
  char cval; int ival; unsigned int ui; float fval; double dval;

  cval='a'+3; //char -> int -> char
  fval=ui-ival*1.0; // ...-> float 
  dval = ui * fval; // uint -> float -> double
  cval = ival + fval + dval;  // int -> float -> double -> char

}


