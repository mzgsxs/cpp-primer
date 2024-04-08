#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string s;
  getline(cin, s);
  for (char & c : s)
  //for (char c : s)//if use char then new variable is created, no change to s
    c = 'x';
  cout << s << endl;


  auto cursor = s.begin();
  while( cursor != s.end()) { 
    *cursor = 'y';
    cursor++;
  }
  cout << s << endl;


  for (
    decltype(s.size()) i = 0; 
    i < s.size();
    i++ ){
    s[i] = 'z';
  }  
  cout << s << endl;

  return 0;
}
