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

#include<stdexcept>
using std::exception;
using std::runtime_error;

#include<cassert>

void manip(int, int){;};
double dobj = 0.1;

int main() 
{
  manip('a', 'z');
  // rank 3, promotion
  // char -> int
  manip(55.4, dobj);
  // rank 4, arithmetic conversion
  // float -> int
  // double -> int
}

