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

  //list<int> lst1{1,2};
  //list<int>::iterator iter1 = lst1.begin(),
  //                    iter2 = lst1.end();
  // !!! iterator arithmetic only supported by 
  // vector, deque, array, string
  // 
  vector<int> lst1{1,2};
  vector<int>::iterator iter1 = lst1.begin(),
                      iter2 = lst1.end();

  while (iter1 < iter2){
    cout << "work ";
    ++iter1;
  } /* ... */
  cout << endl;
  // empty, will not iterate 
}
