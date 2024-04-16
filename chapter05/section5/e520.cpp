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
  string w, w_last;
  cin >> w_last;
  while (cin >> w) {
    if (w == w_last) {
      cout << "repeat found" << endl;
      break;
    }
    w_last = w;
    if (w == "end") {
      cout << "no repeat found" << endl;
      return -1;  
    }
  }
  return 0;
}

