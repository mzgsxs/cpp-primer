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
  char cs1[] = "a string\0";  
  char cs2[] = "a string too\0";  
  // makesure it's null terminated
  list<char *> lcs{cs1, cs2};
  vector<string> vs;
  vs.assign(lcs.begin(), lcs.end());
  cout << vs[0] << endl;
}
