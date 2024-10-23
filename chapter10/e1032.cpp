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
using std::cin;
using std::cout;
using std::endl;


#include "Sales_data.h"
#include "my_utils.h"


#include <fstream>
#include <cassert>
#include <iterator>
bool process_data
(vector<Sales_data> & vs, string const & file_path) 
{
  bool _state{true};
  std::ifstream ifs(file_path);
  assert(ifs);

  std::istream_iterator<Sales_data> sd_iter(ifs), eof;
  while ( sd_iter != eof ){
    vs.push_back(*sd_iter++);
  }
  ifs.close();
  return _state;
}

#include<numeric>
void foo2
(vector<Sales_data> & vs) 
{
  auto it = vs.begin(), end = vs.end();
  auto rbegin = vs.rbegin(), rend = vs.rend();
  while (it != end){
    Sales_data sd{*it};
    auto eit = find(rbegin, rend, sd).base();
    Sales_data sum = accumulate(it+1, eit, sd);
    cout << sum << "\n";
    it = eit;
  }
}


int main(int argc, char *argv[]) 
{
  assert(argv[1]);
  std::string file_path(argv[1]);
  vector<Sales_data> cs;
  process_data(cs, file_path);
  sort(cs.begin(),cs.end());
  //print<vector<Sales_data>>(cs);
  foo2(cs);
  cout << endl;
}






