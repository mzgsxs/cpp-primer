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
  int i=3, j=7;
  double slope = static_cast<double>(j/i);  
  // i,j integer division -> float
  cout << slope << endl; 
}


