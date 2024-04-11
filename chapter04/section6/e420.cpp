#include <iostream>

#include <string>
#include <cstring>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;

using std::begin;
using std::end;

int main()
{
  vector<string> vs = {"aslkjnd", "dawdn"};

  vector<string>::iterator iter = vs.begin();

  cout << *iter++ << endl; 
  //cout << *++iter << endl; 

  //cout << (*iter)++ << endl;  
  // error, can't increment string

  //cout << *iter.empty() << endl; // R !!! associative ! 
  cout << (*iter).empty() << endl; // ok
  //cout << ++*iter << endl; // can't increment string
  cout << iter++->empty() << endl; // ok
    

  return 0;
}


