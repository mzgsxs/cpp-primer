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
  int ai[5] = {1, 2, 3, 4, 5};
  vector<int> vi(begin(ai), end(ai));
  vector<int> vi2(ai+1, ai+5);
 
  cout << vi2.size() << endl; 

  int ai1[vi.size()];
  unsigned idx = 0;
  for (auto & i: ai1) {
    i = vi[idx];
    idx++;
  } 
  
  for (auto & i: ai1) {
    cout << i << endl; 
  }
  return 0;
}


