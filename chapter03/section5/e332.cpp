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
  int i;
  int ai[10];
  for (int i = 0; i < 10; ++i)
    ai[i] = i;

  int ai2[10];
  for (int i = 0; i < 10; ++i)
    ai2[i] = ai[i];

  vector<int> vi(10);
  for (int i = 0; i < 10; ++i)
    vi[i] = i;
  return 0;
}


