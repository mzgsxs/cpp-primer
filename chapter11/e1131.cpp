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
using std::multimap;
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


multimap<string, string> authors;
authors.insert({"AAA", "A Dream"});
authors.insert({"Barth, John", "Sot-Weed Factor"});
authors.insert({"Barth, John", "Lost in the Funhouse"});

cout << authors.size() << endl;
auto it = authors.find("Barth, John");
authors.erase(it);

cout << authors.size() << endl;
auto it2 = authors.find("Balabala");
if (it2!=authors.end()) authors.erase(it2);
cout << authors.size() << endl;
}
