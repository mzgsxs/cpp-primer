#include <iostream>
#include "type_name.h"

int main() 
{
  auto v = 10u;
  std::cerr << typeid(v).name() << std::endl;
  std::cerr << type_name<decltype(v)>() << std::endl;

  return 0;
}
