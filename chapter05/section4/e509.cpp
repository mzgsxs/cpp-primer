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
  char ch;
  string line;
  unsigned vowelCnt(0), otherCnt(0);


  while ( getline(cin, line) ) {
    for (char & ch: line) {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
          ++vowelCnt;
          break;
      } else {
          ++otherCnt;
          break; 
      } 
     // switch (ch) {
     //   case 'a': case 'e': case 'i': case 'o': case 'u': 
     //     ++vowelCnt;
     //     break;
     //   default:
     //     ++otherCnt;
     //     break; 
     // }
    }
  }

  cout << vowelCnt;
  cout << " | ";
  cout << otherCnt;
  cout << endl;
  return 0;
}


