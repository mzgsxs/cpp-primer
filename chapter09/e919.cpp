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


int main(){
  list<string> ds;
  string word;
  while(cin >> word) {
    ds.push_back(word);
  }
  auto itr = ds.begin();
  while ( itr != ds.end() ){
    cout << (*itr++) << " ";
  }
  cout << endl;
}
