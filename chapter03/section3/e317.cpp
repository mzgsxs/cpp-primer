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
  vector<string> vs; 
  string w;
  while (cin >> w) vs.push_back(w);
  for (auto & ww: vs) {
    for (auto & c: ww) c = toupper(c);
    cout << ww << " ";
  }
  cout << endl;
  return 0;
}
