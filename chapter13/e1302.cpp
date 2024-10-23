

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


//Sales_data::Sales_data(Sales_data rhs);

struct A {
  A()=default;
  A(A const a){i=11;} 
  // this will give an error:
  // error: copy constructor must pass its first argument by reference
  int i{0};
};


int main (int argc, char** argv){

A a1;
cout << a1.i << endl;
a1.i = 31;


}
