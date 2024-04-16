#include <iostream>

#include <string>
#include <cstring>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;

using std::begin;
using std::end;

int main()
{

  vector<int> vi1, vi2;
  int i;
  while (cin >> i && i != -999) {
    vi1.push_back(i);
  }
  cout << "vi1 end " << endl;

  int j;
  while (cin >> j && j != -999) {
    vi2.push_back(j);
  }
  cout << "vi2 end " << endl;

  auto min_size = (vi1.size() < vi2.size())? vi1.size() : vi2.size();
  cout << vi1.size() << endl;
  cout << vi2.size() << endl;
  cout << min_size << endl;
  
  for (decltype(min_size) idx=0; idx < min_size; idx++){
    if (vi1[idx] != vi2[idx]) {
      cout << "false" << endl; 
      return -1;
    }
  }
  cout << "true" << endl;
  
  return 0;
}


