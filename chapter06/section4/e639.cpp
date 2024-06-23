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

int calc(int, int);
int calc(const int, const int);
// allows const arguments 
// legal

int get(); 
//double get();
// illegal

int *reset(int *); 
double *reset(double *);
// legal


int main() 
{

  return 0;
}

