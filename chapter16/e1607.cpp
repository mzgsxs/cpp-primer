#include<iostream>
using std::ostream;
using std::cout;
using std::endl;


template <class ValType, std::size_t N>
constexpr
std::size_t
mu_size(ValType (&arr) [N])
noexcept
{
  return N;
}


int 
main(int argc, char** argv)
{
  int ai[] = {1, 2, 3};
  cout << (mu_size(ai)) << endl;
}

