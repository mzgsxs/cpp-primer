
#include<string>
#include<iostream>
#include<sstream>

#include<vector>
#include<functional>
#include<algorithm>

int main (int argc, char** argv){
int v = 7;
std::vector<int> vi={2,3,4,5};
auto f = std::bind(std::modulus<int>(), v, std::placeholders::_1);  
auto ret = std::all_of(vi.begin(), vi.end(), f);
std::cout << ((!ret)?"true":"false") << std::endl;



}
