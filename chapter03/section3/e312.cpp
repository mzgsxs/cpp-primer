#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  vector<vector<int>> ivec;
  vector<string> svec = ivec; // type mismatch
  vector<string> ssvec(10, "null");
  //cout << s << endl;

  return 0;
}
