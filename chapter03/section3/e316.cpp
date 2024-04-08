#include <iostream>
#include "type_name.h"

#include <string>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;

int main()
{
  vector<int> v1; //empty
  vector<int> v2(10); //10
  vector<int> v3(10,42); // 10 entries of int 42
  vector<int> v4{10}; // 1
  vector<int> v5{10, 42}; // 2
  cout << v5.size() << endl;
  cout << typeid(v5.size()).name() << endl;
  std::cerr << type_name<decltype(v5.size())>() << std::endl; // unsigned long
  vector<string> v6{10}; // !!! 10 default init strings
  vector<string> v7{10, "hi"}; // 10 entries of "hi"
  cout << v6.size() << endl;
  cout << typeid(v6.size()).name() << endl;
  std::cerr << type_name<decltype(v6.size())>() << std::endl; // unsigned long

  return 0;
}
