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


constexpr bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}
// constexpr onlyif both s1 and s2 are 

int main() 
{
  string s1{"dqwd"}, s2{"dwq"}; //legal
  isShorter(s1, s2);
  cout << isShorter("dwq", "qwd") << endl;
  return 0;
}

