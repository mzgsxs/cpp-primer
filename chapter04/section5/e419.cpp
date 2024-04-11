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
  int i = 1, * pi;
  vector<int> vi = {1, 2, 3};
  
  if (pi != 0 && *pi++)
    cout << i << endl;
  // LHS evaluted first, ok 

  if (i++ && i)
    cout << i << endl;
  // LHS evaluted first, ok
  
  //if (vi[i++] <= vi[i])
  // always equal
  cout << (vi[i++] <= vi[i]) << endl;

  return 0;
}


