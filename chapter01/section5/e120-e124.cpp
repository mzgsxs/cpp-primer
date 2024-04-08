#include <iostream>
#include "Sales_item.h"

int main() 
{
  Sales_item item, items;
  if (std::cin >> item){
    items = item;
    while (std::cin >> item){
      if (items.isbn() == item.isbn()){
        items += item;
      } else {
        std::cout << items << std::endl; 
        items = item;
      }
    }
    std::cout << items << std::endl; 
  }
  return 0;
}
