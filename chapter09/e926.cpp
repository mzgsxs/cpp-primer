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
void print
(T container)
{
  auto itr = container.begin();
  auto end = container.end();
  while(itr != end){
    cout << (*itr++) << " | ";
  }
  cout << endl;
}



#include <functional>

template<class T, class ValueType>
void my_remove
//(T & c, bool (*criteria) (ValueType const &))
// this is more flexible, as it can also take lambda as well as ordinary function(pointer) type
(T & c, std::function<bool(ValueType const &)> criteria)
{
  auto itr = c.cbegin();
  while (itr != c.cend()) {
    if ( criteria(*itr) ) itr = c.erase(itr);
    else itr++;
  } 
}


// ok
//bool check_odd(int const & v){return v%2!=0;}
// ok 
//inline bool check_odd(int const & v){return v%2!=0;}

int main(){
  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
  list<int> li(std::begin(ia), std::end(ia));
  vector<int> vi(std::begin(ia), std::end(ia));

  my_remove<list<int>, int>(li, [](int const & v){return v%2==0;});
  print<list<int>>(li);

  // not ok for ordinary function pointer decleration
  std::function<bool(int const &)> check_odd = [](int const & v){return v%2!=0;};
  my_remove<vector<int>, int>(vi, check_odd);
  print<vector<int>>(vi);
}
