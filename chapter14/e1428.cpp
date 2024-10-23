
#include<string>
#include<iostream>
#include<sstream>

#include"StrBlob.h"
#include"StrBlobPtr.h"
int main (int argc, char** argv){
  StrBlob sb{"string1", "string2"};
  StrBlobPtr sbp1(sb,0), sbp2(sb,1);

  std::cout << (sbp2-sbp1) << std::endl;
  std::cout << *(sbp1+1) << std::endl;
  std::cout << *(sbp2-1) << std::endl;
  std::cout << *(sbp1+=1) << std::endl;
  std::cout << *(sbp1-=1) << std::endl;
}
