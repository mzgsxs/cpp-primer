
#include<string>
#include<iostream>
#include<sstream>

#include<functional>

#include<vector>
#include<algorithm>

int main (int argc, char** argv){
// a.)
std::vector<int> vi{1,2,3,1025,1024};
auto c = std::count_if(vi.begin(), vi.end(), 
  std::bind(std::greater<int>(), std::placeholders::_1, 1024)); 
std::cout << c << std::endl;

// b.)
std::vector<std::string> vs{"hooh","hooh","dwqd"};
auto ret = find_if(vs.begin(), vs.end(), 
  std::bind(std::not_equal_to<std::string>(), std::placeholders::_1, "hooh"));
std::cout << *ret << std::endl;

// c.)
transform(vi.begin(), vi.end(), vi.begin(),
  std::bind(std::multiplies<int>(), std::placeholders::_1, 2)); 

for_each(vi.begin(), vi.end(),
  [](int i){std::cout << i << std::endl;}); 

}
