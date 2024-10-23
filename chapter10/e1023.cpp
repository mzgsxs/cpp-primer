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

auto check6 = bind(check_size, _1, 6);
// number of parameters of foo + 1(i.e. foo)
cout << check6("wqbkudalisn");

cout << endl;

}
