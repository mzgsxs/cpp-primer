
#include<string>
#include<iostream>
#include<sstream>

#include"Sales_data.h"

int main (int argc, char** argv){

Sales_data sd1, sd2;
std::stringstream ss, ss2;
ss << "0-201-99999-9 10 24.95";
ss >> sd1;

ss2 << "0-201-99999-9 10 24.95";
ss2 >> sd2;

//std::cout << (std::string("ok") + sd1 ) << std::endl;
//std::cout << sd1 << std::endl;

std::cout << sd1 << std::endl;
std::cout << sd2 << std::endl;

std::cout << (sd1 + "wsadfwq") << std::endl;
/*
It's best to make it explicit to avoid any confusion

*/

}
