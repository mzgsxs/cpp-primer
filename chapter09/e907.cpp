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
  vector<int> vi{1,2,3};
  vector<int>::size_type idx = 1;
  cout<< vi[idx] <<endl;
}
