#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
#include <cstring>
using std::string;

#include <vector>
using std::vector;

using std::begin;
using std::end;

#include<stdexcept>
using std::exception;
using std::runtime_error;

#include<cassert>

#include "Sales_data.h"

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
      if (datas.bookNo == data.bookNo){
        datas.units_sold += data.units_sold;
        datas.revenue += data.revenue;
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

