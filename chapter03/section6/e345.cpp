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
  int ia[2][3] = {1, 2, 3, 4, 5, 6};
  cout << ia[0][1] << endl;

  for (auto & row: ia)
    for (auto & col: row)
      cout << col << " ";
  cout << endl;

  return 0;
}


