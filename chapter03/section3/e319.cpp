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
  vector<int> v1(10,42);
  vector<int> v2{42,42,42,42,42,42,42,42,42,42};
  vector<int> v3; // then push_back
  return 0;
}
