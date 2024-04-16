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
  begin:
    int sz = get_size();
    if (sz <= 0) {
      goto begin;
    }
  */
  do {
    int sz = get_size();
  } while (sz<=0);

  return 0;
}

