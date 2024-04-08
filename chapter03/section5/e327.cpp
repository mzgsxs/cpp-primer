#include <iostream>

#include <string>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;

int txt_size(){return 10;};

int main()
{
  unsigned buf_size = 1024;
  int ia[buf_size]; //ok
  int ib[4*7-14];//ok
  int ic[txt_size()];
  //char st[11] = "fundamental"; // too long!
  char st[12] = "fundamental"; // one extra space is needed for null charactor!
  return 0;
}


