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
  int ai[10];
  for (int i = 0; i < 10; ++i)
    ai[i] = i;

  for (int i = 0; i < 10; ++i)
    cout << ai[i] << endl;
  return 0;
}


