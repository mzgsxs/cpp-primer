#include<iostream>
using std::ostream;
using std::cout;
using std::endl;


class Base {
public:
  virtual int fcn(){
  cout << "base fcn" << endl;
  return 0;
  }
  int fcn(int){ 
    cout << "base fcn(int)" << endl;
    return 1;
  }
};

class D1 : public Base {
public:
  int fcn() override{ // parameter list differs from fcnin Base
    cout << "D1 fcn()" << endl;
    return 1;
  } 
  int fcn(int){ 
    cout << "D1 fcn(int)" << endl;
    return 1;
  }
};

void foo(Base & b){
  b.fcn(); // D1 fcn
  b.fcn(0); // Base fcn
}

int main(int argc, char** argv){

D1 d1;
foo(d1);
/*
regular overloaded function can not experience runtime polymorphism
use of override makes no difference, it's only for documentation propers
*/



}
