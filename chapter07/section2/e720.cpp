#include "Person.h"

int main() 
{
  /*
  when a non-class function / another class needs to access this class' private member variable
  pros:
    isolation
  cons:
    fragmentation
  */
  Person p;
  print(std::cout, p);
}


