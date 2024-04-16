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

int main() 
{
  int i, j;
  cin >> i >> j; 
  cout << i/j << endl;
  if (j==0) 
    throw runtime_error("Division by zero!!!");  
  //try {
  //} catch (exception err) {
  //} 

  return 0;
}

