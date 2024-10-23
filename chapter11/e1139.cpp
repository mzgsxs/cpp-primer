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
using std::unordered_map;
using std::set;
using std::multiset;

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


#include<sstream>
using std::istringstream;
using std::ostringstream;


#include<exception>
using std::runtime_error;

unordered_map<string, string> buildMap
(ifstream & mapfs)
{
  unordered_map<string, string> dict; 
  string key, value;
  while (mapfs >> key && getline(mapfs, value)){
    if (value.size() > 1) dict[key] = value.substr(1);
    else throw runtime_error("no rule for " + key);
  }
  return dict;
}


void word_transform
(ifstream & mapfs, ifstream & infs)
{
  auto dict = buildMap(mapfs);
  string line, word;
  while ( getline(infs, line) ){
    istringstream iss(line);
    bool first_word{true};
    while( iss >> word ){
      if (first_word) first_word = false;
      else cout << " ";
      cout << ((dict.count(word) == 0)?word:dict[word]);
    }
    cout << endl;
  }
}


int main(int argc, char** argv){
  string mapf{argv[1]};
  string inf{argv[2]};

  ifstream mapfs(mapf), infs(inf);
  word_transform(mapfs, infs);

  mapfs.close(); infs.close();
}
