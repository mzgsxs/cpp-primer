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

#include"Str.h"
int main (int argc, char** argv){

// unique_ptr inside clone is handed over to outer scope unique_ptr
// it's probably moved 
Str s1{"string1"}, s2{"string2"};
//Str s3{std::move(s1+s2)};
//Str s3{s1+s2}; //compiler moved this, move constructor not called!
Str s3 = s1+s2; //compiler moved this, move constructor not called!
}

