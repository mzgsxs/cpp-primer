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

void swap(int * & pi1, int * & pi2){
  int * tpi = pi1;
  pi1 = pi2;
  pi2 = tpi;
}

int main() 
{
  int i(10), j(13);
  int * pi(&i), * pj(&j);
  cout << *pi << " | " << *pj << endl;
  swap(pi, pj);
  cout << *pi << " | " << *pj << endl;



  return 0;
}

