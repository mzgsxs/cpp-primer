
#include<vector>
using std::vector;

#include<iostream>


class Example {
public:
  // static double rate = 6.5; //not ok, non-const, non-constexpr
  static double rate;
  static int const vecSize = 20; // ok
  //static vector<double> vec(vecSize); //
  static vector<double> vec; //
};

//double Example::rate; // no value assigned
double Example::rate = 6.5; 
int const Example::vecSize; 
//vector<double> Example::vec;
vector<double> Example::vec(Example::vecSize);

int main(){
  std::cout << Example::vec.size() << std::endl;
}
