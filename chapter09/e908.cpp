#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;

#include<iostream>
using std::cout;
using std::endl;

int main(){
  list<string> ls{"aa", "bb", "cc"};
  list<string>::iterator itr{ls.begin()};
  cout << *itr << endl;
}
