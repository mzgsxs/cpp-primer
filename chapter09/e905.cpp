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

template<class T>
typename vector<T>::iterator foo
(typename vector<T>::iterator const & vib, typename vector<T>::iterator const & vie, T const & v)
{
  typename vector<T>::iterator vi(vib);
  while (vi != vie){
    cout << "next\n";
    if (*vi == v) return vi;
    ++vi;
  }
  return vie;
}

int main(){
  //vector<int> vi{1,2,3,4,5};
  //int i = 3;
  //cout << foo<int>(vi.begin(), vi.end(), i)
  //<< endl;

  vector<string> vi{"aa", "bb", "cc"};
  string i{"bb"};
  cout << *foo<string>(vi.begin(), vi.end(), i)
  << endl;
}
