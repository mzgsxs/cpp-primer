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

  int ai[10] = {1, 2, 3};
  for (int i=0; i < sizeof(ai)/sizeof(int); i++){
    cout << ai[i];
  }
  cout << endl;

  
  int j=0;
  while (j < sizeof(ai)/sizeof(int)){
    cout << ai[j++];
  }
  cout << endl;

  // clearly for loop is clearer


  string s;
  while (cin >> s && s != "end"){
    cout << s;
    cout << endl;
  }
  cout << endl;


  for (;cin >> s && s != "end";){
    cout << s;
    cout << endl;
  }
  cout << endl;
  
  // for is also ok with this

  return 0;
}


