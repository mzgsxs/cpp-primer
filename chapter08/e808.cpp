
#include "Sales_data_revised.h"
#include <iostream>
#include <fstream>

#include <cassert>

bool process_data
(std::string const & file_path, std::string const & output_path) 
{
  std::ifstream ifs(file_path);
  std::ofstream ofs(output_path, std::ofstream::app);

  assert(ifs && ofs);

  Sales_data datas;
  if (read(ifs, datas)){
    Sales_data data; 
    while (read(ifs, data)){
      if (datas.isbn() == data.isbn()){
        datas = add(datas, data);
      } else {
        print(ofs, datas);
        datas = data;
      } 
    }   
    print(ofs, datas);
  } else {
    std::cerr << " no data !? " << std::endl;
    ifs.close();
    ofs.close();
    return false;
  } 
  ifs.close();
  ofs.close();
  return true;
} 

int main(int argc, char *argv[]) 
{

  std::string file_path(argv[1]), output_path(argv[2]);
  process_data(file_path, output_path);
}

