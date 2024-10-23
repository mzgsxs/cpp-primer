

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
  A(A const & a){i=11;} 
  // copy assignment
  A & operator=(A const & a){i=22; return *this;}
  ~A(){
    cout << 33 << endl;
  }

  // Data
  int i{0};
};




int main (int argc, char** argv){

A a1;
cout << a1.i << endl;
a1.i = 31;


// copy construction
A a2(a1); 
cout << a2.i << endl;

A a3 = a1;
cout << a3.i << endl;

A a4{a1};
cout << a4.i << endl;

// copy assignment
A a5;
a5 = a1;
cout << a5.i << endl;

}
