#include "Sales_data_revised.h"
#include <iostream>


int process_data() 
{
  Sales_data datas;
  if (read(std::cin, datas)){
    Sales_data data;
    while (read(std::cin, data)){
      if (datas.isbn() == data.isbn()){
        datas = add(datas, data);
      } else {
        print(std::cout, datas);
        datas = data;
      }
    }
    print(std::cout, datas);
  } else {
    std::cerr << " no data !? " << std::endl;
    return -1;
  }
  return 0;
}
int main() 
{
  process_data();
}

