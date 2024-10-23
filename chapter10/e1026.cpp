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
deque<int> vi{1,2,3,4};
auto it = vi.begin() + 2;

auto bi = std::back_inserter(vi);

auto fi = std::front_inserter(vi);

auto ii = std::inserter(vi, it);


cout << endl;

}
