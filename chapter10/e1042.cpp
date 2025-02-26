#include<algorithm>

using std::begin;
using std::end;

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



void elimDups(list<string> &words)
{
  //std::sort(words.begin(), words.end());
  words.sort();
  words.unique();
}

int main(){
list<string> vs{"fox", "jumps", "over", "quick", "red", "red", "slow", "the", "the", "turtle"};
elimDups(vs);
print(vs);

cout << endl;


}
