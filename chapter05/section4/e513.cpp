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

  /*
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0; char ch = next_text();
    switch (ch) {
          case ’a’: aCnt++;
          case ’e’: eCnt++;
          default: iouCnt++;
    }
    // no break!
  */



  /*
  unsigned index = some_value(); 
  switch (index) {
    case 1:
        int ix = get_value();
        ivec[ ix ] = index;
        break;
    default:
        ix = ivec.size()-1;
        ivec[ ix ] = index;
  }
  // ix defined in case 1 !!!
  */


  /*
  unsigned evenCnt = 0, oddCnt = 0; 
  int digit = get_num() % 10; 
  switch (digit) {
    case 1, 3, 5, 7, 9:
      oddcnt++;
      break;
    case 2, 4, 6, 8, 10:
      evencnt++;
      break; 
  }
  // 10 should be 0 !!!
  */


  /*
  unsigned ival=512, jval=1024, kval=4096; 
  unsigned bufsize;
  unsigned swt = get_bufCnt();
  switch(swt) {
    case ival:
      bufsize = ival * sizeof(int);
      break;
    case jval:
      bufsize = jval * sizeof(int);
      break;
    case kval:
      bufsize = kval * sizeof(int);
      break;
  }
  // no default case !!!
  */

  return 0;
}


