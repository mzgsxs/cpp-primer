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

#include<initializer_list>
using std::initializer_list;

int sum(initializer_list<int> const il){
  int sum=0;
  for (auto p = il.begin(); p != il.end(); ++p){
    sum += *p;
  }
  return sum;
}


int main() 
{

  cout << sum({1,23,123,122}) << endl;
  //cout << sum({1,2.3,12.3,12.2}) << endl;

  initializer_list<int> il1 = {1,2,3,4};
  cout << sum(il1) << endl;

  initializer_list<int> il2 = {12,23,12,2,3,4};
  cout << sum(il2) << endl;

  return 0;
}

