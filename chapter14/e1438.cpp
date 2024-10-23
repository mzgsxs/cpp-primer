
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>

struct check_length{
  check_length(std::size_t b):bound(b){}
  bool operator() (std::string word){
    return word.size() < bound;
  }
  std::size_t bound;
};


int main (int argc, char** argv){
check_length cl(4);
std::string word;
std::ifstream ifs(argv[1]);
std::size_t count = 0;
while(ifs >> word){
  if (cl(word)) {
    std::cout << word << std::endl;
    ++count;
  }
}
std::cout << count << std::endl;
ifs.close();
}
