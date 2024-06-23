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

void print(const int (&ia)[10]){
// this will force to check if argument have the same size 
// as specified by parameter  
//void print(const int ia[10]){
  for (size_t i = 0; i != 10; ++i) 
    cout << ia[i] << endl;
}
// only take fixed sized int array

int main() 
{

  int ia[] = {1,2,3,4,5,6,7};
  // if we use this as the argument, it's legal but wrong
  // it will print undefined value from memory
  //int ia[] = {1,2,3,4,5,6,7,8,9,10};
  print(ia);

  int const ib[] = {1,2,3,4,5,6,7,8,9,10};
  print(ib);
  
  //double ic[] = {1,2,3,4,5,6,7,8,9,10};
  //print(ic);
  // not possible

  return 0;
}

