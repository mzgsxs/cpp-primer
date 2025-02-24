#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

#include <vector>
#include <string>


template <class PtrType, class ValType>
PtrType
my_find(PtrType const begin, PtrType const end, ValType const & val)
{
  PtrType p = begin; 
  while (p != end){
    if ( val == *p )
      break;
    ++p;
  }
  return p;
}


int 
main(int argc, char** argv)
{
  std::vector<int> vi{1, 2, 3, 4, 5}; 
  cout << *my_find(vi.begin(), vi.end(), 3) << endl;

  std::string s{"a string"}; 
  cout << *find(s.begin(), s.end(), 'r') << endl;
}
