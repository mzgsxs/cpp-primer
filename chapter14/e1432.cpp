
#include<string>
#include<iostream>
#include<sstream>

#include"StrBlob.h"
#include"StrBlobPtr.h"

StrBlob a1{"a string", "bye", "now"};
StrBlobPtr sbp(a1);

struct Ptr{
  StrBlobPtr * psbp{&sbp};
  StrBlobPtr * operator -> (){
    return psbp;
  }

};


int main (int argc, char** argv){
  Ptr d;
  d->operator++();


}
