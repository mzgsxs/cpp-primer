#include "Sales_data_revised.h"
#include <iostream>

void print_sales_data(Sales_data datas){
   std::cout << 
   datas.bookNo     << " |\t " << 
   datas.units_sold << " |\t " <<
   datas.revenue    <<
   std::endl; 
}

int process_data() 
{
  Sales_data datas;
  double unit_price;
  if (std::cin >> datas.bookNo >> datas.units_sold >> unit_price){
    Sales_data data;
    datas.revenue = datas.units_sold * unit_price;
    while (std::cin >> data.bookNo >> data.units_sold >> unit_price){
      data.revenue = data.units_sold * unit_price;
      if (datas.isbn() == data.isbn()){
        datas.combine(data);
      } else {
        print_sales_data(datas);
        datas = data;
      }
    }
    print_sales_data(datas);
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

