#include <iostream>

#include <string>
#include <cstring>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;

using std::begin;
using std::end;

int main()
{
  int i; double d; const string *ps; char *pc; void *pv;

  pv = (void*)ps;
  pv = const_cast<string *>(ps);
  //pv = static_cast<void *>(const_cast<string *>(ps));
  //pv = reinterpret_cast<void *>(const_cast<string *>(ps));

  i = int(*pc);
  i = static_cast<int>(*pc);

  pv = &d;
  pv = static_cast<void *>(&d);

  pc = (char*) pv;
  pc = static_cast<char *>(pv);
  
}


