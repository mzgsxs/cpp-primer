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
  vector<int> v2{v1};

  // copy init
  vector<int> v3(v1);
  vector<int> v4 = v1;

  // constructor init
  vector<int> v5(v1);
  vector<int> v6(10);
  vector<int> v7(10,2);
  // iterator init
  vector<int> v8(v1.begin(), v1.end());
}
