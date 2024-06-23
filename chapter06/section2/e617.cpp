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


bool contain_capital(const string s){
  for(char c:s){
    if (isupper(c)) return true;
  }
  return false;
}


void all_to_lower(string & s){
  for(char & c:s){
    c = tolower(c);
  }
}

// no, they have different purpose

int main() 
{
  
  string s = "FT_=-212~~DkndqwUBDKQwefUw";
  cout << contain_capital(s) << endl;


  all_to_lower(s);
  cout << s << endl;

  return 0;
}

