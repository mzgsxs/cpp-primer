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

int main()
{
  vector<int> vi = {1,2,3,4,5,6};
  
  for (int& i: vi){
    i = (i%2 == 0)?i:i*i;
  }
  
  cout << vi[2] << endl; // ok
    

  return 0;
}


