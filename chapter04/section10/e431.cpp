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
  vector<int> ivec = {1,2,3}; 
  vector<int>::size_type cnt = ivec.size(); // assign values from size ... 1 to the elements in ivec 
  for(vector<int>::size_type ix = 0;
      ix != ivec.size(); 
      //++ix, --cnt) { 
      ix++, cnt--) { // no difference?!
    cout << ix << "|" << cnt << endl;
    ivec[ix] = cnt;
  }
}


