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
  vector<int> vi(10,3);
  for (auto i = vi.begin(); i != vi.end(); ++i){
    *i = (*i)*(*i);
  }

  for (auto i = vi.begin(); i != vi.end(); ++i){
    cout << *i << endl;
  }

  return 0;
}
