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
  //typedef list<string> Type;
  typedef vector<string> Type;
  Type lst;
  auto iter = lst.begin();
  string word;
  while (cin >> word)
    iter = lst.insert(iter, word);
  // insert before iter, returned iter is where the inserted element is at
  print<Type>(lst);
}
