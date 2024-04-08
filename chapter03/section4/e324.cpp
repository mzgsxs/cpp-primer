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

  for (
    auto bidx = cvi.begin(); 
    bidx < (cvi.end()-1);
    bidx++ ){
    cout << *bidx + *(bidx+1) << " ";
  }
  cout << endl;

  auto bidx = cvi.begin();
  auto eidx = cvi.end();
  for (
    ; 
    bidx < eidx;
    bidx++ ){
    eidx--;
    cout << *bidx + *eidx << " ";
  }
  cout << endl;

  return 0;
}
