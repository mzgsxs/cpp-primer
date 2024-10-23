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


bool foo
(forward_list<string> & flst, string const & s1, string const & s2)
{
  auto prev = flst.before_begin(); // denotes element "off the start" of flst
  auto curr = flst.begin(); // denotes the first element in flst
  while (curr != flst.end()) {
    if (*curr == s1) {
      curr = flst.insert_after(curr, s2); 
      return true;
    }
    else {
      ++prev;
      ++curr; 
    }
  }
  curr = flst.insert_after(prev, s2); // erase it and move curr
  return false;
}

int main(){

forward_list<string> flst{"aa", "bb", "cc"};
//foo(flst, "bb", "xx");
foo(flst, "dd", "xx");

print<forward_list<string>>(flst);
}
