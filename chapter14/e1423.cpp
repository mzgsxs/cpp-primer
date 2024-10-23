
#include<string>
#include<iostream>
#include<sstream>

#include"StrVec.h"
int main (int argc, char** argv){

StrVec sv{"a string"};
std::cout << sv.size() << std::endl;
sv = {"string1", "string2"};
std::cout << sv.size() << std::endl;

}
