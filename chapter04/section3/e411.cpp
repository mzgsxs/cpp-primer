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
  int i[4];
  unsigned idx = 0;
  while (cin >> i[idx]) {
    if (idx == 3) break;
    cout << i[idx] << endl;
    idx++;
  }
  
  if ( i[0] < i[1] < i[2] < i[3]) // L-assiociative, evalutes L to R
  // but (<) operator returns ture or false !!!
    cout << "ok" << endl;

  if ( (i[0] < i[1]) && (i[1] < i[2]) && (i[2] < i[3]) ) // L-assiociative, evalutes L to R
    cout << "ok" << endl;

  return 0;
}


