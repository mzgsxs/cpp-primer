#include "Sales_data_revised.h"
#include <iostream>



int main() 
{
  Sales_data sd1;
  print(std::cout, sd1);

  Sales_data sd2("paul's adventure");
  print(std::cout, sd2);

  Sales_data sd3("paul's adventure", 10, 13);
  print(std::cout, sd3);

  Sales_data sd4(std::cin);
  print(std::cout, sd4);
}

