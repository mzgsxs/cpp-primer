

#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;


#include<iostream>
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

#include<fstream>
using std::ifstream;
using std::ofstream;

#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;


struct A {
  A()=default;
  // copy constuctor
  A(A const & a){cout << "A(A const & a)" << endl;} 
  // copy assignment
  A & operator=(A const & a){
    cout << "A & operator=(A const & a)" << endl;
    return *this;
  }
  ~A(){
    cout << "~A()" << endl;
  }

  // Data
  int i{0};
};




int main (int argc, char** argv){

A a1;
// copy construction
A a2(a1); 
A a3 = a1;
A a4{a1};
// copy assignment
A a5;
a5 = a1;

}
