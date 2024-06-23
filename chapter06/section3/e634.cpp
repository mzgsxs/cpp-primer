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

// calculateval!, which is1*2*3. . .*val 
int factorial(int val)
{
  if (val != 0)
    return factorial(val-1) * val;
  return 1; 
}
// same multiply 1 two times 

int main() 
{
  cout << factorial(5) << endl;
  return 0;
}

