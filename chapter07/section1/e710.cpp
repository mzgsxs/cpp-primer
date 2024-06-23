#include "Person.h"


int main() 
{
  Person p1, p2;
  // reads two lines 
  if(read(read(std::cin, p1), p2)) std::cout << "ok" << std::endl;
  
  print(std::cout, p1);
  print(std::cout, p2);
}


