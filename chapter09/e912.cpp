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
  //deque<int> v2{v1};
  //deque<int> v3(v1);
  // Both error
  deque<int> v3(v1.begin(), v1.end());
  // OK

}
