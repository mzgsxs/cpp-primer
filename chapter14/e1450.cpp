
#include<string>
#include<iostream>
#include<sstream>

struct LongDouble {
LongDouble(double v = 0.0){};
operator double(){return 0.;};
operator float(){return 1.;};
};


LongDouble ldObj;
int ex1 = ldObj; // ambigous
float ex2 = ldObj; // ok


int main (int argc, char** argv){




}
