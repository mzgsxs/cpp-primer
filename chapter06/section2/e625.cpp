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



int main(int argc, char * argv[]) 
{
  vector<string> args;
  string s;
  for (int i=1; i<argc; i++) s+=argv[i]; 
  cout << s << endl;

  return 0;
}

