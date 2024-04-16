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

  while( cin >> i >> j ){ 
    try {
      if (j==0) 
        throw runtime_error("Division by zero!!!");  
      //cout << float(i)/float(j) << endl;
      cout << static_cast<double>(i)/static_cast<double>(j) << endl;
    } catch (runtime_error err) {
      cout << err.what()
           << "\nTry Again? Enter y or n" << endl;
      char c;
      cin >> c;
      if (!cin || c == 'n') break;
    } 
  }
  return 0;
}

