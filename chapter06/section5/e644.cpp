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

inline bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

int main() 
{
  string s1{"dqwn"}, s2{"dwqkqw"};
  cout << isShorter(s1,s2) << endl;
  return 0;
}

