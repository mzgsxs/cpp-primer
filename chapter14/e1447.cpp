
#include<string>
#include<iostream>
#include<sstream>

struct Integral {
operator const int();
// return a const copy of the object, but it may change the object
operator int() const;
// return a modifiable copy of the object
};



int main (int argc, char** argv){





}
