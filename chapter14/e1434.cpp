
#include<string>
#include<iostream>
#include<sstream>

struct test{
  int operator()(int a, int b, int c){
    if (a>1) return b;
    else return c;
  }
};


int main (int argc, char** argv){
test t;
std::cout << t(1,2,3) << std::endl;


}
