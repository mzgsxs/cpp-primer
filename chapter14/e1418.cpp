
#include<string>
#include"StrBlob.h"
#include"StrVec.h"
#include"Str.h"

#include<iostream>
int main (int argc, char** argv){

StrBlob sb1{"string"}, sb2{"string"};
std::cout << (sb1<sb2) << std::endl;

//StrBlobPtr sbp1(sb1), sbp2(sb1, 1);
//std::cout << (sbp1<sbp2) << std::endl;
//
StrVec sv1{"string"};
//StrVec sv2(sv1);
StrVec sv2{"string2"};
std::cout << (sv1<sv2) << std::endl;
//
//Str s1 = "string";
//Str s2(s1);
////Str s2 = "string2";
//std::cout << (s1<s2) << std::endl;


}
