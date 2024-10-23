
#include "Sales_data_revised.h"
#include <iostream>
#include <fstream>

#include <cassert>

bool process_data
(std::string const & file_path) 
{
  std::ifstream ifs(file_path);

  assert(ifs);

  Sales_data datas;
  if (read(ifs, datas)){
    Sales_data data; 
    while (read(ifs, data)){
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
    ifs.close();
    return false;
  } 
  ifs.close();
  return true;
} 

int main(int argc, char *argv[]) 
{

  std::string file_path(argv[1]);
  process_data(file_path);
}

