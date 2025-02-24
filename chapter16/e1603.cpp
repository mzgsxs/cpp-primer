#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

#include <functional>
using std::less;
// less equal

#include "Sales_data.h"

template<class T>
int 
compare (T const & v1, T const & v2)
{
  print(std::cout, v1); //ok but undefined for other class
  if (v1 > v2) return 1;
  if (v1 < v2) return -1;
  return 0;
}


int 
main(int argc, char** argv)
{
  Sales_data sd1("A", 1, 1.99 );
  Sales_data sd2("B", 2, 0.99 );
  //print(std::cout, sd1);
  //auto i = compare<Sales_data>(sd1, sd2);
  auto i = (sd1 < sd2);
  cout << i << endl;
}
