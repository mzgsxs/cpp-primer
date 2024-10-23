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


vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
auto iter = vi.begin(); 
while (iter != vi.end()){
  if (*iter % 2)
    iter = vi.insert(iter, *iter);
  ++iter;
  // need to advance two position as we have inserted element
  // otherwise loop inf.
  //++iter;
}

print<vector<int>>(vi);

}
