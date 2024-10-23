#include<algorithm>

using std::begin;
using std::end;

#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;



#include<iostream>
#include<fstream>
using std::cin;
using std::cout;
using std::endl;


#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;


#include"my_utils.h"

#include <cassert>

int main(int argc, char *argv[]) 
{
  //assert(argc == 4);
  std::ifstream ifs(argv[1]);
  std::ofstream oddfs(argv[2]);
  std::ofstream evenfs(argv[3]);
  std::istream_iterator<int> in_it(ifs), eof;
  std::ostream_iterator<int> odd_it(oddfs);
  std::ostream_iterator<int> even_it(evenfs);
  while ( in_it != eof ){
    if ( *in_it%2 ) *odd_it = *in_it;
    else *even_it = *in_it;
    ++in_it;
  }
  oddfs.close(); evenfs.close();
}
