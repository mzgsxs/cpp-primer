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
  list<int> li{1,2,3,4};
  cout << li.size() << endl;
  vector<double> vd(li.begin(), li.end());
}
