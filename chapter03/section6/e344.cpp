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

  typedef int (&r_row_ia)[3];

  for (r_row_ia row: ia)
    for (int & col: row)
      cout << col << " ";
  cout << endl;

  //using row_ia = int[3];
  typedef int (*p_row_ia)[3];
  
  for (p_row_ia rp = ia; rp < ia+2; rp++)
    for (int * cp = *rp; cp < *rp+3; cp++)
      cout << *cp << " ";
  cout << endl;

  for (size_t i = 0; i < 2; i++)
    for (size_t j = 0; j < 3; j++)
      cout << ia[i][j] << " ";
  cout << endl;

  return 0;
}


