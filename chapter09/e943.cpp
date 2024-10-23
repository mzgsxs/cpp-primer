#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;

#include<iostream>
using std::cin;
using std::cout;
using std::endl;


template<class T>
void print(T container)
{
  auto itr = container.begin();
  auto end = container.end();
  while(itr != end){
    cout << (*itr++) << " | ";
  }
  cout << endl;
}

//bool my_replace
//(string & s, string const & oldVal, string const & newVal)
//{
//  string::size_type occur = s.find(oldVal, 0);
//  string::size_type size_oldVal = oldVal.size();
//  string::size_type size_newVal = newVal.size();
//
//  if (occur == string::npos) return false;
//  while (occur != string::npos){
//    s.replace(occur, size_oldVal, newVal);
//    occur = s.find(oldVal, occur+size_newVal);
//  }
//  return true;
//}

bool my_replace
(string & s, string const & oldVal, string const & newVal)
{
  string::iterator cursor = s.begin();
  string::size_type size_oldVal = oldVal.size();
  string::size_type size_newVal = newVal.size();

  while ( (cursor + size_oldVal -1) != s.end()){
    string window(cursor, cursor+size_oldVal);

    cout << s << endl;
    cout << window << endl;
    
    if (window == oldVal){
      string::size_type pos = cursor-s.begin();
      s.erase(cursor-s.begin(), size_oldVal);
      // iterators before removal points are still valid
      cursor = s.begin() + pos;
      cout << *cursor<< endl;
      cursor = s.insert(cursor, newVal.begin(), newVal.end());
      // return iter points to first inserted element
      cout << *cursor<< endl;
    }
    ++cursor;
  }
  return true;
}



int main(){
string s{"thotho thothoa string used for testing, tho and thru, tho, thoe tho"},
       oldVal{"tho"},
       newVal{"though"};
       //oldVal{"thru"},
       //newVal{"through"};

my_replace(s, oldVal, newVal);

cout << s << endl;

}
