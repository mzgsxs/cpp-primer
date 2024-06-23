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

void f(){cout << "f1" << endl;}; //f1
void f(int){cout << "f2" << endl;}; //f2
void f(int, int){cout << "f3" << endl;}; //f3
void f(double, double = 3.14){cout << "f4" << endl;}; //f4

int main() 
{
  //f(2.56, 42);
  // f3,f4 viable, ambiguous
  // both f3 and f4 needs conversion
  f(42);
  // f2, f4 viable, best f2
  f(42, 0);
  // f3, f4 viable, best f3
  f(2.56, 3.14);
  // f3, f4 viable, best f4 
}

