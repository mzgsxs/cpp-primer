
#include<string>
#include<iostream>
#include<sstream>

#include "StrVec.h"
#include "Str.h"
#include "StrBlob.h"
int main (int argc, char** argv){
StrVec sv{"string1", "string2"};
std::cout << sv[0] << std::endl;
//std::cout << sv[2] << std::endl;

Str s{"string1"};
std::cout << s[0] << std::endl;
//std::cout << s[10] << std::endl;

StrBlob sb{"string1", "string2"};
std::cout << sb[0] << std::endl;

StrBlobPtr sbp{sb};
std::cout << sbp[0] << std::endl;
}
