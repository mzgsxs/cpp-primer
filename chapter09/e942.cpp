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

string s;
s.reserve(256);
cout<< s.capacity() <<endl;

s = "ok";
cout<< s.size() <<endl;
cout<< s.capacity() <<endl;

s.shrink_to_fit();
cout<< s.size() <<endl;
cout<< s.capacity() <<endl;

}
