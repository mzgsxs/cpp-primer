
#include<string>
#include<iostream>
#include<sstream>



struct LongDouble {
LongDouble(double v = 0.0){};
operator double(){return 0.;};
operator float(){return 1.;};
};



void calc(int){std::cout << "0" << std::endl;};
void calc(LongDouble){std::cout << "1" << std::endl;};

int main (int argc, char** argv){

double dval=0.1;
calc(dval); // which calc?
// 0


}
