#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

#include <functional>
using std::less;
// less equal

template<class T>
int 
compare (T const & v1, T const & v2){
  if (less<T>()(v1, v2)) return 1;
  else return -1;
  return 0;
}

int main(int argc, char** argv){
  cout << compare<int>(1, 2) << endl;
  cout << compare<int>(2, 2) << endl;
  cout << compare<int>(2, 1) << endl;
}
