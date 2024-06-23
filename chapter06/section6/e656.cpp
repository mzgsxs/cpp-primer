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

int add(int i, int j){return i+j;}
int subt(int i, int j){return i-j;}
int multi(int i, int j){return i*j;}
int divide(int i, int j){return i/j;}

using arithmeticType = int (*) (int, int);

int main() 
{
  vector<arithmeticType> vafoo;
  int i = 10, j = 2;
  vafoo.push_back(add);
  vafoo.push_back(subt);
  vafoo.push_back(multi);
  vafoo.push_back(divide);
  for (auto f:vafoo) cout << f(i, j) << endl;
}

