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
  vector<int> v1{1,2};
  vector<int> const v2{3,4};

  auto it1 = v1.begin();
  //auto it2 = v2.begin();
  vector<int>::const_iterator it2 = v2.begin();
  // *it2 = 3; not possible 

  //auto it3 = v1.cbegin();
  vector<int>::const_iterator it3 = v1.cbegin();
  //auto it4 = v2.cbegin();
  vector<int>::const_iterator it4 = v2.cbegin();
}
