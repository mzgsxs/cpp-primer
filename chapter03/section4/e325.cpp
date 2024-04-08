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
  vector<unsigned> vu; 
  unsigned g;
  while (cin >> g) if (g <= 100) vu.push_back(g);
  vector<unsigned> const cvu = vu;
  vector<unsigned> s(11,0);
  for (auto i = cvu.begin(); i!=cvu.end(); ++i){
    ++s[*i/10];
    cout << *i/10;
  }
  
  cout << endl;

  return 0;
}
