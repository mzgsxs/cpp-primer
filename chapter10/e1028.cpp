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


template<class T>
void print(typename T::iterator itr, typename T::iterator end)
{
  while(itr != end){
    cout << (*itr++) << " , ";
  }
  cout << endl;
}


int main(){

vector<int> vi{1,2,3,4};
list<int> li1, li2, li3;
copy(vi.begin(), vi.end(), back_inserter(li1));
copy(vi.begin(), vi.end(), front_inserter(li2));
copy(vi.begin(), vi.end(), inserter(li3, li3.begin()));

print<list<int>>(li1.begin(), li1.end());
print<list<int>>(li2.begin(), li2.end());
print<list<int>>(li3.begin(), li3.end());
cout << endl;

}
