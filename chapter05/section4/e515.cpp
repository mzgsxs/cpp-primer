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
  for(int ix=0; ix!=sz; ++ix) { ... } 
  if (ix != sz) // always false!
    // . . .
  */


  /*
  int ix;
  for ( ix!=sz; ++ix){ ... } // need null init statement!!!
  */


  /*
  for (int ix=0; ix!=sz; ++ix, ++sz) { ... }
  // ix can never catch up with sz if sz or ix not been modified inside { ... }
  */

  return 0;
}


