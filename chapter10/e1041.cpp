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
/*
replace(beg, end, old_val, new_val);
replace any entry between beg and end with value of old_val to new_val


replace_if(beg, end, pred, new_val);
replace any entry between beg and end with value that satisfies pred to new_val


replace_copy(beg, end, dest, old_val, new_val);
replace any entry between beg and end with value of old_val to new_val
copy replaced container to destination


replace_copy_if(beg, end, dest, pred, new_val);
replace any entry between beg and end with value that satisfies pred to new_val
copy replaced container to destination

*/

vector<int> vi{1,2,3,4,5,6,7,8,9,10};
list<int> li;
auto beg = vi.begin(), end = vi.end();
auto dest = back_inserter(li);
int old_val = 5, new_val = 999;
replace_copy(beg, end, dest, old_val, new_val);
print<vector<int>>(vi);
print<list<int>>(li);
}
