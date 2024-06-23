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

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
// returns a pointer to an array of five int elements 
decltype(odd) & arrPtr(int i)
{
  return (i % 2) ? odd : even; // returns a pointer to the array 
}

int main() 
{

  return 0;
}

