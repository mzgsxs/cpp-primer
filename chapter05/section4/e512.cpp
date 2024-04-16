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
  unsigned otherCnt(0);
  unsigned ffCnt(0), fiCnt(0), flCnt(0) ;


  int idx;
  while ( getline(cin, line) ) {
    for (idx = 0; idx < line.size()-1; idx++) {
      switch (line[idx]) {
        case 'f':
          switch (line[idx+1]) {
            case 'f':
              ++ffCnt;
              break; 
            case 'l':
              ++flCnt;
              break; 
            case 'i':
              ++fiCnt;
              break; 
            default:
              ++otherCnt;
              break; 
          }
          break;
        default:
          ++otherCnt;
          break; 
      }
    }
  }

  cout << ffCnt;
  cout << " | ";
  cout << flCnt;
  cout << " | ";
  cout << fiCnt;
  cout << " | ";
  cout << otherCnt;
  cout << endl;
  return 0;
}


