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
  cout << s[3] << endl;
  int * p1 = &s[0], * p2 = &s[9];
  int * p = s;
  (s+3)[0] = 999;
  cout << s[3] << endl;

  return 0;
}


