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



template<class T>
void print(T container)
{
  auto itr = container.begin();
  auto end = container.end();
  while(itr != end){
    cout << (*itr++) << " , ";
  }
  cout << endl;
}

#include "Sales_data_revised.h"

bool compareIsbn(Sales_data const & s1, Sales_data const & s2)
{
  return s1.isbn() < s2.isbn();
}

#include<functional>


template<class T>
void elimDups(vector<T> & elems, std::function<bool(T const &, T const &)> criteria)
{
  std::stable_sort(elems.begin(), elems.end(), criteria);
  auto end_unique = std::unique(elems.begin(), elems.end());
  elems.erase(end_unique, elems.end());
}


#include <iostream>
#include <fstream>

#include <cassert>

bool process_data
(vector<Sales_data> & vs,
std::string const & file_path) 
{
  bool _state{true};
  std::ifstream ifs(file_path);

  assert(ifs);

  Sales_data data; 
  if (read(ifs, data)){
    vs.push_back(data);
    while (read(ifs, data)){
      vs.push_back(data);
    }
  } else {
    std::cerr << " no data !? " << std::endl;
    _state = false;
  } 
  ifs.close();
  return _state;
}

int main(int argc, char *argv[]) 
{
  std::string file_path(argv[1]);
  vector<Sales_data> cs;
  process_data(cs, file_path);

  elimDups<Sales_data>(cs, compareIsbn);
  print(cs);
  cout << endl;
}
