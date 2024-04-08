#include <iostream>

#include <string>
#include <cstring>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;


int main()
{
  char ca1[] = "Hello";
  char ca2[] = "World";
  //char ca3[strlen(ca1)+strlen(ca2)+1];
  //char ca3[1]; // overflows
  char ca3[100];

  strcpy(ca3, ca1);
  strcat(ca3, " ");
  strcat(ca3, ca2);
  // becuase it's undefined! 
  cout << ca3 << endl;

  return 0;
}


