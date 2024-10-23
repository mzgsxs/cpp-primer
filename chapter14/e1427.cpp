
#include<string>
#include<iostream>
#include<sstream>

#include"StrBlob.h"
#include"StrBlobPtr.h"
int main (int argc, char** argv){
  StrBlob sb{"string1", "string2"};
  StrBlobPtr sbp(sb);
  std::cout << *(sbp++) << std::endl;
  std::cout << *(sbp) << std::endl;
}
