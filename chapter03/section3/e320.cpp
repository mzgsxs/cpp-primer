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
  vector<int> vi; 
  int i;
  while (cin >> i) vi.push_back(i);
  vector<int> const cvi = vi;

  auto size = cvi.size();
  for (
    decltype(size) idx(0); 
    idx < (size-1);
    idx++ ){
    cout << cvi[idx]+cvi[idx+1] << " ";
  }
  cout << endl;

  decltype(size) bidx(size-1);
  for (
    decltype(size) idx(0); 
    idx < bidx;
    idx++ ){
    cout << cvi[idx]+cvi[bidx] << " ";
    bidx--;
  }
  cout << endl;

  return 0;
}
