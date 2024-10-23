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

int main(){
istream_iterator<int> in_iter(cin), eof;
vector<int> vec(in_iter, eof);
sort(vec.begin(), vec.end());
ostream_iterator<int> out_iter(cout, " ");
copy(vec.begin(), vec.end(), out_iter);
cout << endl;

}
