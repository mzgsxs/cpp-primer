

#include<iostream>
using std::cout;
using std::endl;;

class Parent{
public:
  int i = 10;

private:
  float j = 3.14;

protected:
  char c = 'c';

};

/*
class Child: Parent{
default access modifier is private 

*/
class Child: public Parent{
public:
  void get_i(){
    cout << i << endl;
  }

  /*
  void get_j(){
    cout << j << endl;
  }
  // fail, becuase j is private
  */

  void get_c(){
    cout << c << endl;
  }

  /*
  difference between protected and private:
  child/derived class can access protected but not private member of the base class 
  */
};

int main(int argc, char** argv){
  Child C;
  C.get_i();
  C.get_c();
  cout << C.i << endl;  
  // ok
  cout << C.c << endl;   
  // fail becuase it's protected member of Child
}
