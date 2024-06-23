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


void test(string & s){;} 
//void test(string const & s){;} 
// it should be const if we do not intent to change it
// if it's not const, then it can not take constant 
// if it's not const, then it can not take literal 
void test2(int const & i){;} 
// if it's not const, then it can not do implicit conversion from literal
// if it's not const, then it can not do implicit conversion from variable

int main() 
{

  string const s1 = "string";
  string s2 = "string";
  test(s1);
  test(s2);
  test("string");

  double d = 3.65;
  test2(d);
  test2(4.54);// ok but warning
  return 0;
}

