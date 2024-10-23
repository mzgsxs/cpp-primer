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

#include"Foo.h"


/*
Foo & retFoo(); // returns a reference; a call to retFoois an lvalue
Foo retVal(); // returns by value; a call to retValis an rvalue
*/

int main (int argc, char** argv){
/*
called for any value, i.e.

Foo f2 = f1.sorted(); 

*/

Foo f1, f2;
f1.sorted(); // lvalue or const rvalue version called
std::move(f2).sorted(); // rvalue version called




}

