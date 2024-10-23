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

bool check_size(const string &s, string::size_type sz)
{
return s.size() >= sz;
}


using namespace std::placeholders;

#include<functional>
int main(){


string s{"sss"};
vector<int> vi{1,2,3,4};
auto seek = find_if_not(vi.begin(), vi.end(), bind(check_size, s, _1));
cout << *seek;


cout << endl;

}
