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

  for (int (&row)[3]: ia)
    for (int & col: row)
      cout << col << " ";
  cout << endl;

  for (int (*rp)[3] = ia; rp < ia+2; rp++)
    for (int * cp = *rp; cp < *rp+3; cp++)
      cout << *cp << " ";
  cout << endl;

  for (size_t i = 0; i < 2; i++)
    for (size_t j = 0; j < 3; j++)
      cout << ia[i][j] << " ";
  cout << endl;

  return 0;
}


