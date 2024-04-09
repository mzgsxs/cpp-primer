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
  const char * cp = "Hello world";
  if (cp && *cp) // check if cp is non-null pointer and value of it pointed to is non-zero
    cout << "ok" << endl;
  return 0;
}


