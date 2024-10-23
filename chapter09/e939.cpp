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

vector<string> svec;
svec.reserve(1024);
// reserve 1024 element capacity
string word;
while (cin >> word)
  svec.push_back(word);
// affect size but not capacity!!! 
svec.resize(svec.size()+svec.size()/2);


}
