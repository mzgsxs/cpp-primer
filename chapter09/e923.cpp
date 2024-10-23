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
  vector<int> c{13};
  if (!c.empty()) {
    // valand val2are copies of the value of the first element in c
    auto val = *c.begin(), val2 = c.front();
    // val3and val4are copies of the of the last element in c
    auto last = c.end();
    auto val3 = *(--last); // can’t decrement forward_listiterators
    auto val4 = c.back(); // not supported by forward_list

    cout << val << val2 << val3 << val4 << endl;
  }
}
