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

vector<int> vi{1,2,3,3,4};
list<int> li;
unique_copy(vi.begin(), vi.end(), back_inserter(li));
print<list<int>>(li.begin(), li.end());
cout << endl;

}
