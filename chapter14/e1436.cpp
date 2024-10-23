
#include<string>
#include<iostream>
#include<sstream>

#include<vector>

struct PrintString{
  std::string operator()(std::istream & is){
    if (getline(is, s))
      return s;
    else
      return std::string();
  }
  std::string s;
};


int main (int argc, char** argv){
PrintString ps;
std::vector<std::string> vs;
size_t c = 0;
while(c<5){
  ++c;
  std::string s = ps(std::cin);
  vs.push_back(s);  
}

for (auto & s: vs)
  std::cout << s << std::endl;


}
