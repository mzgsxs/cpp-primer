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
  vector<int> vi{1,2,3,4,5,6}; 
  auto beg = vi.begin(), end = vi.end();

  auto mid = beg+(end-beg)/2;
  cout << *mid;

  cout << endl;

  //cout << (beg+end)/2;  
  //auto mid2 = (beg+end)/2;
  //cout << *mid2;  
  // you can't add two iterators, not been implemented
  return 0;
}
