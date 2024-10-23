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

#include<fstream>
using std::ifstream;

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
  string s{"a pig in a farm"};
  string ascenders{"df"}; 
  string descenders{"dpg"}; 

  ifstream ifs("./words");
  string word, best{""};
  while(ifs >> word){
    if ((word.find_first_of(ascenders) == string::npos) && 
        (word.find_first_of(descenders) == string::npos) &&
        (word.length() > best.length())){
      best = word;
    } 
    cout << best << endl;
  }

  cout << best << endl;

}
