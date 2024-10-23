#include<vector>
#include<deque>
#include<list>

using std::vector;
using std::deque;
using std::list;

#include<iostream>
using std::cout;
using std::endl;

int main(){
  vector<int> vi1{1,2,3};
  vector<int> vi2{1,2,3};
  cout << vi1.end() - vi2.begin()
  << endl;
  // valid range
  // same element
}
