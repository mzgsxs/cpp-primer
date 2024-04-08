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
  int s1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // still default initilazed as 0s
  //int s2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // still default initilazed as 0s
  int s2[10];
  int s3[11];
 
  int (& sa)[10] = s1;
  int (& sb)[10] = s2; 
  unsigned  size_a = sizeof(sa) / sizeof(int);
  unsigned  size_b = sizeof(sb) / sizeof(int);

  if (size_a != size_b) {
    cout << "Not same size" << endl;
    return -1;
  };

  for (int i = 0; i < size_a; ++i) 
    if (sa[i] != sb[i]) {
      cout << "Same size, entries are not the same" << endl;
      return -1;
    };
  
  cout << "Same" << endl;
  return 0;

  /*
  // for vector
  vector<int> va;
  vector<int> vb;
  auto size_a = va.size();
  auto size_b = vb.size();

  // same except
  for (decltype(size_a) i = 0; i < size_a; ++i) 
  */
}


