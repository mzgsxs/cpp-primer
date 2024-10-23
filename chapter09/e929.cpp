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

  vector<int> vec(25,1);
  vec.resize(100);
  print<vector<int>>(vec);
  //default initialize all elements
  vec.resize(10);
  print<vector<int>>(vec);
  //truncate all the rest

}
