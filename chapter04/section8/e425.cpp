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

  int i = 0b11111111111111111110001110000000; // C++14 std
  cout << i << endl;
  cout << (~'q' << 6) << endl;
  // char -> pomoted to int -> shift 
  // 01110001 -> (111..)10001110 -> (111.. 18 of 1s)10001110000000 
  return 0;
}


