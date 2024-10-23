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


#include<map>
#include<set>
using std::map;
using std::set;

#include<utility>
using std::pair;

#include<iostream>
using std::istream;
using std::cin;
using std::cout;
using std::endl;

#include<fstream>
using std::ifstream;

#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;


#include"my_utils.h"

template <typename T>
typename T::first_type get_keys
(T keyValuePair)
{
  return keyValuePair.first;
}


struct RetrieveKey
{
    template <typename T>
    typename T::first_type operator()(T keyValuePair) const
    {
        return keyValuePair.first;
    }
};




int main(){
  map<string, string> m;
  auto it = m.begin();
  auto end = m.end();
  //*it = {"s","ss"};
  it->second = "s";
  cout << (it==end) << endl;

  vector<string> keys;
  //transform(m.begin(), m.end(), back_inserter(keys), 
  //  [](pair<string const, string> kvp){return kvp.first;});

  //cout << get_keys(*it) << endl;
  // this function is ok but template matching only works for calls
  //transform(m.begin(), m.end(), back_inserter(keys), get_keys);
  transform(m.begin(), m.end(), back_inserter(keys), RetrieveKey());

  print(keys);
  cout << keys.size() << endl;;
}
