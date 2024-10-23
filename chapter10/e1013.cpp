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

bool foo
(string const & s)
{
return s.size() >= 5;
}

int main(){
vector<string> vs{"sf","cqwdqwdf","qfwq","fqwfqw","dqw"};
auto it = std::partition(vs.begin(), vs.end(), foo);
print<vector<string>>(vs.begin(), it);
cout << endl;

}
