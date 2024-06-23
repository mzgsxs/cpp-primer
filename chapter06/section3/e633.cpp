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


void print(vector<int>::iterator vi_begin, vector<int>::iterator vi_end){
  if (vi_begin < vi_end){
    cout << *vi_begin << endl;
    print(vi_begin+1, vi_end);
  }
}

int main() 
{
  vector<int> vi = {1,2,3,4,5};
  print(vi.begin(), vi.end());
  return 0;
}

