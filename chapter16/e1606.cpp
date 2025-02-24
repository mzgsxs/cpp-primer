#include<iostream>
using std::ostream;
using std::cout;
using std::endl;




template <class ContainerType>
auto
mu_begin(ContainerType const & c)
-> decltype(c.begin())
{
  return c.begin();
}

template <class ContainerType>
auto
mu_end(ContainerType const & c)
-> decltype(c.end())
{
  cout << *c.end() << endl;
  return c.end();
}




template <class ValType, std::size_t N>
ValType *
mu_begin(ValType (&arr) [N])
{
  return &arr[0];
}

template <class ValType, std::size_t N>
ValType *
mu_end(ValType (&arr) [N])
{
  return &arr[0] + N;
}




int 
main(int argc, char** argv)
{
  std::vector<int> vi{1,2,3};

  auto b = mu_begin<std::vector<int>>(vi);
  auto e = mu_end<std::vector<int>>(vi);
  cout << *b << endl;
  cout << *(e-1) << endl;

  int ai[] = {1, 2, 3};
  cout << *(mu_begin(ai)) << endl;
  cout << *(mu_end(ai)-1) << endl;

}

