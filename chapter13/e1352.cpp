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

//simialar to the following case
Str s1{"s1"},s2{"s2"};
s1 = std::move(s2);

/*
std::move(s2) returns a rvalue
Str & operator = (Str sv) is engaged
"Str sv" uses "Str(Str && rs)" to construct
i.e Str sv(std::move(s2))
now sv takes control of s2's resources
sv is swapped with *this (i.e. s1)
now s1 takes control of s2's resources


*/

}

