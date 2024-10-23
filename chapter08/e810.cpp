
#include<string>
#include<vector>
#include<iostream>
#include<fstream>

#include<exception>
#include<stdexcept>

#include "debugInfo.h"

bool foo(std::string const & file_path, std::vector<std::string> & vsr) {

  try{
    std::ifstream ifs(file_path);
    if (ifs){
      std::string line;
      while ( std::getline(ifs, line) ){
        vsr.push_back(line);
      }
      ifs.close();
    } else {
      throw std::invalid_argument("Invalid Argument Error: file path is invalid"); 
    }
  }
  catch (std::invalid_argument & err) {
    std::cerr << err.what() << std::endl;
#ifndef NDEBUG
    debugInfo::log(std::cerr, __FILE__, __func__, __LINE__);
#endif
    return false;
  }
  catch (std::exception & err) {
    std::cerr << err.what()
      << "\n Unkown Error:" << std::endl;
#ifndef NDEBUG
    debugInfo::log(std::cerr, __FILE__, __func__);
#endif
    return false;
  }

  return true;
}


int main(int argc, char *argv[]){
  std::vector<std::string> contents;
  std::string file_path(argv[1]);
  std::cout << file_path << std::endl;
  if ( foo(file_path, contents) ) { std::cout << "ok" << std::endl;};

  std::istringstream iss;
  std::string word;
  for (std::string & line: contents){
    iss.str(line);
    while(iss >> word){
      std::cout << word << std::endl; 
    }
    iss.clear();
  }

}

