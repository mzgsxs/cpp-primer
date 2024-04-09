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
  vector<int> vec(10,1);
  int i = 0;
  cout << i << " | "<< ++i << endl;// this may be undefined depends on compilar

  // programers should be responsible for pitfalls arised from 
  // compilar's optimization of the evaluation order 
  return 0;
}


