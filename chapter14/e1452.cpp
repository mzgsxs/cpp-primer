
#include<string>
#include<iostream>
#include<sstream>

class SmallInt {
friend
SmallInt operator+(const SmallInt&, const SmallInt&);
public:
SmallInt(int = 0); // conversion from int
operator int() const { return val; } // conversion to int
private:
std::size_t val;
};

struct LongDouble {
LongDouble(double v=0.1){}
// member operator+for illustration purposes; +is usually a nonmember
LongDouble operator+(const SmallInt&){
std::cout << "member" << std::endl;
return *this;
}
// other members as in § 14.9.2 (p. 587)
};

LongDouble operator+(LongDouble& lhs, double rhs){
std::cout << "non-member" << std::endl;
return lhs;
}

int main (int argc, char** argv){

SmallInt si;
LongDouble ld;

ld = si + ld;
//no viable function
ld = ld + si;
// member function




}
