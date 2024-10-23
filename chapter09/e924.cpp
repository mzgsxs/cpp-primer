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

  typedef vector<int> Ctype;

  Ctype c;
  c.begin();
  //cout << c.at(0) << endl;
  // gives warning

  //cout << c[0] << endl;
  //cout << *(c.begin()) << endl;
  //cout << c.front() << endl;
}
