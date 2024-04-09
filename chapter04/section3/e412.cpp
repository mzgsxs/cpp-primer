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
  int i,j,k;
  cout << (i != j < k) << endl;
  cout << (i != (j < k)) << endl;
  // (!=) have lower precedence
  return 0;
}


