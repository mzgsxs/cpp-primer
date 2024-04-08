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
  vector<int> vi{10, 42}; // 2
  cout << vi.size() << endl;
  for (auto i = vi.begin(); i != vi.end(); ++i){
    cout << *i << endl;
  }

  vector<string> vs{10, "hi"}; // 10 entries of "hi"
  cout << vs.size() << endl;
  for (auto i = vs.begin(); i != vs.end(); ++i){
    cout << *i << endl;
  }


  return 0;
}
