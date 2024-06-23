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

char * init(int ht, int wd = 80, char bckgrnd = ' '){
  cout << ht << endl;
  cout << wd << endl;
  cout << bckgrnd<< endl;
  return & bckgrnd;
}

int main() 
{

  //init();
  //too few arguments
  init(24,10);
  // ok
  init(14, '*');
  // illegal, but not ok
  // char * casted into int of value 42

  return 0;
}

