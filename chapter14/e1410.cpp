
#include"Sales_data.h"
#include<iostream>
#include<sstream>

int main (int argc, char** argv){

Sales_data sd1;
std::stringstream ss;
//ss << "0-201-99999-9 10 24.95";
ss << "10 24.95 0-210-99999-9";
// implicit type conversion happened
ss >> sd1;
std::cout << sd1;




}
