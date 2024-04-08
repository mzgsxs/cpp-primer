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
  vector<int> ivec;
  //ivec[0] = 42; // illegal! empty vector!!!
  ivec.push_back(42);
  return 0;
}
