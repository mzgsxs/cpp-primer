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


string (& foo(int i))[10]{;}

typedef string as_ten[10];
as_ten & foo1(int i){;}

using as_ten2 = string[10];
as_ten2 & foo2(int i){;}

auto foo4(int i) -> string(&)[10]{;}

string s[10];
decltype(s) & foo5(int i){;}

// I perfer trialing return

int main() 
{

  return 0;
}

