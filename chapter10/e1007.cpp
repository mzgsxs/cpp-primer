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


int main(){
/*
vector<int> vec; list<int> lst; int i;
while (cin >> i)
lst.push_back(i);
// copy can not modify vec's size
copy(lst.cbegin(), lst.cend(), vec.begin());
*/

vector<int> vec;
vec.reserve(10); // reserveis covered in § 9.4 (p. 356)
// reserve is different from resize
fill_n(vec.begin(), 10, 0);
// ok, no segmentation fault but the size is still 0!!!
cout << vec.size();

cout << endl;

}
