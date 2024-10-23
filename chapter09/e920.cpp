#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;

#include<iostream>
using std::cout;
using std::endl;

template<class T>
void print(T container)
{
  auto itr = container.begin();
  auto end = container.end();
  while(itr != end){
    cout << (*itr++) << " | ";
  }
  cout << endl;
}


int main(){
  // list init
  list<int> li{1,2,3,4};
  deque<int> di1, di2;
  for (auto & v: li){
    if (v%2==0) di1.push_back(v);
    else di2.push_back(v);
  }

  print<deque<int>>(di1);
  di1[0] = 6;
  print<deque<int>>(di1);
  print<deque<int>>(di2);
  print<list<int>>(li);

}
