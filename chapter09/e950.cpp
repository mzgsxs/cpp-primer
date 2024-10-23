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
  vector<string> vs{"0","1.1","11","111"};
  int sum{0};
  for(auto s:vs){
    sum += stoi(s);
  }
  cout << sum << endl;

  float fsum{0.};
  for(auto s:vs){
    fsum += stof(s);
  }
  cout << fsum << endl;
}
