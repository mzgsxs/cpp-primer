
#include<iostream>

struct X {
  // always use initialiser rather than assign
  // this constructor does not initialise members in order!!!
  // the order is the same as the definition
  X (int i, int j): base(i), rem(base % j) { }
  int rem, base;
  int base, rem;
};

int main(){
  X x(10, 2);
  std::cout << 
  x.rem <<
  x.base <<
  std::endl;


}
