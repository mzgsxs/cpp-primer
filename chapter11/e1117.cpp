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

int main(){

multiset<string> c{"multiset"};
vector<string> v{"vector"};

copy(v.begin(), v.end(), inserter(c, c.end()));
//copy(v.begin(), v.end(), back_inserter(c));
// illegal, as multiset does not have push_back
copy(c.begin(), c.end(), inserter(v, v.end()));
copy(c.begin(), c.end(), back_inserter(v));



}
