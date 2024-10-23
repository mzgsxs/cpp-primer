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


using std::unordered_map;




inline 
string remove_punct
(string & text)
{
  std::transform(text.begin(), text.end(), text.begin(), ::tolower);
  string result;
  std::remove_copy_if( text.begin(), text.end(),
             std::back_inserter(result), //Store output
             //std::ptr_fun<int, int>(&std::ispunct)
             [](unsigned char c){ return std::ispunct(c); }
            );
  return result;
}

unordered_map<string, size_t> foo 
(istream & is)
{
  unordered_map<string, size_t> word_counts;

  string word;
  while (is >> word)
    ++word_counts[remove_punct(word)];
  
  cout << word_counts.bucket_count() << endl;
  cout << word_counts.max_bucket_count() << endl;
  return word_counts;
}



int main(){
ifstream ifs("words"); 
auto word_count = foo(ifs); 

for (const auto &w : word_count) // for each element in the map
  cout << w.first << " occurs " << w.second
  << ((w.second > 1) ? " times" : " time") << endl;

}
