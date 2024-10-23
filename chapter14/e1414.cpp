
#include<iostream>
#include<sstream>
#include<string>
/*
the otherway around will result the following:
*/
#include"Sales_data_sum_first.h"

int main (int argc, char** argv){
Sales_data sd1, sd2;
std::stringstream ss, ss2;
ss << "0-201-99999-9 10 24.95";
ss >> sd1;
std::cout << sd1;
std::cout << std::endl;

ss2 << "0-201-99999-9 5 20";
ss2 >> sd2;
std::cout << sd2;
std::cout << std::endl;

std::cout << (sd1+sd2);
std::cout << std::endl;

sd1 += sd2;
std::cout << sd1;
}
