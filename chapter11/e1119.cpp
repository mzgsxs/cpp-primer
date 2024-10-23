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

#include"Sales_data.h"

int main(){

multiset<Sales_data, decltype(compareIsbn)*>
bookstore(compareIsbn);

multiset<Sales_data, bool(*)(Sales_data const &, Sales_data const &)>::iterator it = bookstore.begin();
}
