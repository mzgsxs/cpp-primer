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
  while(cin >> i) vi.push_back(i);
  cout << vi.size() << endl;

  vector<string> vs;
  string s;
  while(cin >> s) vs.push_back(s);
  cout << vs.size() << endl;

  return 0;
}
