#include <iostream>

#include <string>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;


int main()
{
  int s[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // still default initilazed as 0s
  int * p1 = &s[0], * p2 = &s[9];

  // subscript of array can be negative
  // subscript of vector or string can NOT!!!

  cout << p1 << endl;
  cout << p2 << endl;
  cout << p1 - p2 << endl;

  p1 += p2 - p1; // may ? fail if array is huge and occupies entire memory
  cout << p1 << endl;
  cout << s[1] << endl;
  cout << *p1 << endl;
  return 0;
}


