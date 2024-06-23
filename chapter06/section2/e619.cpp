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

double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int); 
vector<int> vec(10);

int main() 
{
  
  calc(23.4, 55.1); 
  // too many arguments 
  count("abcda", 'a');
  // ok 
  calc(66);
  // ok
  sum(vec.begin(), vec.end(), 3.8);
  // ok, but implicit conversion was taken

  return 0;
}

