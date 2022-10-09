#include <iostream>
#include "Sales_item.h"

int main() 
{
  Sales_item items;
  if (std::cin >> items){
    Sales_item item;
    while (std::cin >> item){
      if (items.isbn() == item.isbn()){
        items += item;
      } else {
        std::cout << items << std::endl; 
        items = item;
      }
    }
    std::cout << items << std::endl; 
  } else {
    std::cerr << " no data !? " << std::endl;
    return -1;
  }
  return 0;
}
