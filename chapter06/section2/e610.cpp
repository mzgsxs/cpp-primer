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


void swapmu(int * & i, int * & j){
  int * k;
  k = i;
  i = j;
  j = k;
}

int main() 
{
  //int i(31), j(13);
  //cout << i << " | " << j << endl;
  //swapmu(&i, &j);
  //cout << i << " | " << j << endl;

  int i = 42;
  cout<<&i<<endl;
  reset(&i);
  cout<<"i=" <<i<<endl;
  cout<<&i<<endl;

  return 0;
}

