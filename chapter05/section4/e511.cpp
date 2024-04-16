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
  unsigned blankCnt(0), tabCnt(0), newlineCnt(0) ;


  while ( getline(cin, line) ) {
    for (char & ch: line) {
      cout << ch;
      switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u': 
        case 'A': case 'E': case 'I': case 'O': case 'U': 
          ++vowelCnt;
          break;
        case ' ':
          ++blankCnt;
          break;
        case '\t':
          ++tabCnt;
          break;
        default:
          ++otherCnt;
          break; 
      }
    }
    ++newlineCnt;
  }

  cout << vowelCnt;
  cout << " | ";
  cout << otherCnt;
  cout << " | ";
  cout << blankCnt;
  cout << " | ";
  cout << tabCnt;
  cout << " | ";
  cout << newlineCnt;
  cout << endl;
  return 0;
}


