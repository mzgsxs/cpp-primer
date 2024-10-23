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
  vector<int> iv{1,2,3,4,5,6};
  int some_val = 2;

  vector<int>::iterator iter = iv.begin();
  //auto mid = iv.begin() + iv.size()/2;
  auto mid = [&iv] () {return (iv.begin() + iv.size()/2);};
  //auto mid = [&iv] () -> vector<int>::iterator {return (iv.begin() + iv.size()/2);};
  while (iter != mid()) {
    if (*iter == some_val)
      iter = iv.insert(iter, 2 * some_val)+1;
      // insertion invalidates iterators
    iter++;
  }
      
  print<vector<int>>(iv);
}
