
#include<string>
#include<iostream>
#include<sstream>
#include<vector>

struct replace_value{
  replace_value(int i, int j): ref(i), rep(j) {}
  void operator()(int & v){
    if (v == ref) v = rep;
  }
  int ref, rep;
};

int main (int argc, char** argv){
std::vector<int> vi{1,2,3,4,5,5,4,3,2,1};
replace_value rv(2,20);
//for_each(vi.begin(), vi.end(), [&rv](int & v){rv(v);});
for_each(vi.begin(), vi.end(), rv);
//for_each(vi.begin(), vi.end(), replace_value(2,30));

for (auto v: vi) std::cout << v << std::endl;

}
