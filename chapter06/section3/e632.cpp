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

int & get(int *arry, int index) { return arry[index]; }

int main2() {
  int ia[10];
  for (int i = 0; i != 10; ++i)
    get(ia, i) = i;
  return 0;
}
// legal
int main() 
{
  int ai[] = {1,2,3};
  cout << get(ai, 2) << endl;

  main2();
  return 0;
}

