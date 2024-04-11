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
  int i = 1, j, k;
  
  j = ++i;
  k = i++;
  cout << j << "|" << k << endl;
    
  return 0;
}


