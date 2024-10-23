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


int main (int argc, char** argv){

/* 
copy constructor 
use make_shared to allocate new heap memory
then initialise shared_ptr to point to it

copy-assignment 
use make_shared to allocate new heap memory
then direct shared_ptr to it

smart pointer will manage memory automatically

}

