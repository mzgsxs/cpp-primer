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



int main(){

set<string> exclude{"the", "but", "and", "or", "an", "a",
                    "The", "But", "And", "Or", "An", "A"};
// unique, fast insertion and deletion
// automatically ordered/sorted
// O(log n)) for search, insertion, and deletion 
// 

vector<string> vexclude{"the", "but", "and", "or", "an", "a",
                        "The", "But", "And", "Or", "An", "A"};
// normally it's O(n) 

}
