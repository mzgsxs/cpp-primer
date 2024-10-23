
#include<string>
#include<iostream>
#include<fstream>
#include<sstream>

struct check_length{
  check_length(std::size_t lb, std::size_t ub):
    lower_bound(lb), upper_bound(ub){}
  bool operator() (std::string word){
    std::size_t sz = word.size();
    return lower_bound < sz && sz < upper_bound;
  }
  std::size_t lower_bound, upper_bound;
};


int main (int argc, char** argv){
check_length cl(0,10);
std::string word;
std::ifstream ifs(argv[1]);
std::size_t count = 0, count2 = 0;
while(ifs >> word){
  if (cl(word)) {
    std::cout << word << std::endl;
    ++count;
  } else ++count2;
}
std::cout << count << std::endl;
std::cout << count2 << std::endl;
ifs.close();
}
