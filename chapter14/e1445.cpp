
#include<string>
#include<iostream>
#include<sstream>

#include"Sales_data.h"

int main (int argc, char** argv){

Sales_data sd1;
std::stringstream ss;
ss << "0-201-99999-9 10 24.95";
ss >> sd1;


//std::cout << (std::string("ok") + sd1 ) << std::endl;
std::cout << (std::string("asdbk").append(sd1) ) << std::endl;
std::cout << static_cast<std::string>(sd1) << std::endl;
std::cout << (10 + sd1 ) << std::endl;
std::cout << static_cast<double>(sd1) << std::endl;


}
