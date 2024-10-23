#include<vector>
#include<deque>
#include<list>
#include<string>
#include<forward_list>

using std::vector;
using std::deque;
using std::list;
using std::string;
using std::forward_list;

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

forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
auto prev = flst.before_begin(); // denotes element "off the start" of flst
auto curr = flst.begin(); // denotes the first element in flst
while (curr != flst.end()) {
  if (*curr % 2) // if the element is odd
    curr = flst.erase_after(prev); // erase it and move curr
  else {
    prev = curr; 
    ++curr; 
  }
}

print<forward_list<int>>(flst);
}
