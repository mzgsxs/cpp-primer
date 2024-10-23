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


#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;


#include"my_utils.h"


int main(){

vector<int> vi{1,2,3,4,5,6,7,8,9,10};
list<int> li;
copy(vi.rend()-7, vi.rend()-3+1, back_inserter(li));
cout << li.size() << endl;;
print<list<int>>(li);
}
