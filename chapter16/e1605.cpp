#include<iostream>
using std::ostream;
using std::cout;
using std::endl;



template <unsigned ArraySize>
void 
print(int (&arr)[ArraySize])
{
  for (auto elem : arr)
  cout << elem << endl;
}


int 
main(int argc, char** argv)
{
  int ai[] = {1, 2, 3};
  print(ai);
  // automatically deduce the number of the elements
}

