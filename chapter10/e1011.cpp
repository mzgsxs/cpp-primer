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


bool isShorter(const string &s1, const string &s2)
{
return s1.size() < s2.size();
}


void elimDups(vector<string> &words)
{
  std::stable_sort(words.begin(), words.end(), isShorter);
  auto end_unique = std::unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
}


int main(){
vector<string> vs{"fox", "jumps", "over", "quick", "red", "red", "slow", "the", "the", "turtle"};
elimDups(vs);
print(vs);

cout << endl;


}
