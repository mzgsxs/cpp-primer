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



map<string, unsigned> foo 
(istream & is)
{
  map<string, unsigned> word_counts;

  string word;
  while (is >> word)
    ++word_counts[word];
    
  return word_counts;
}



int main(){
ifstream ifs("words"); 
auto word_count = foo(ifs); 

for (const auto &w : word_count) // for each element in the map
  cout << w.first << " occurs " << w.second
  << ((w.second > 1) ? " times" : " time") << endl;

}
