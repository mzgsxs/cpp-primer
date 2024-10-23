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
  // list init
  vector<int> v1{1,2,3,4};
  vector<int> v2{1,2,3,4};
  cout << ((v1 == v2)?"true":"false") << endl; 
}
