
#include<string>
#include<iostream>
#include<sstream>

class SmallInt {
friend
SmallInt operator+(const SmallInt& a, const SmallInt& b){return a;}
public:
SmallInt(int v = 0):val(v){} // conversion from int
operator int() const { return val; } // conversion to int
operator float() const { return val; } // conversion to int
private:
std::size_t val;
};


int main (int argc, char** argv){


SmallInt s1;
//double d = s1 + 3.14;
double d = static_cast<float>(s1) + 3.14;
// ambigous call


}
