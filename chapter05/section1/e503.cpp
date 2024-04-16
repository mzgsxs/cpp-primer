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
  int sum = 0, val = 1;
  while (val <= 10) sum+=val, ++val; 
  // decreased readability
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
  return 0;
}


