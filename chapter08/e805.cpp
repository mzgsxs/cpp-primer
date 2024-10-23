
#include<string>
#include<vector>
#include<iostream>
#include<fstream>
#include<sstream>

#include<exception>
#include<stdexcept>

#include "debugInfo.h"

bool foo(std::string const & file_path, std::vector<std::vector<std::string>> & vsr) {

  try{
    std::ifstream ifs(file_path);
    if (ifs){
      std::string line, word;
      std::vector<std::string> vs;
#ifndef NDEBUG
      int line_no(0);
#endif
      while ( std::getline(ifs, line) ){
        std::istringstream words(line);
#ifndef NDEBUG
        debugInfo::log(std::cerr, "Processing line number: ", line_no++);
#endif
        while ( words >> word ) {
#ifndef NDEBUG
          debugInfo::log(std::cerr, "Processing word: ", word);
#endif
          vs.push_back(word);
        }
        vsr.push_back(vs);
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
  std::vector<std::vector<std::string>> contents;
  std::string file_path(argv[1]);
  std::cout << file_path << std::endl;
  if ( foo(file_path, contents) ) { std::cout << "ok" << std::endl;};
}

