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
#include<iterator>

void foo(char cs []){
  cout << *cs++ << endl;
  cout << *cs++ << endl;
  cout << *cs++ << endl;
  cout << (*cs=='\0') << endl;
}

int main (int argc, char** argv){


//char cs [] = {'a','b','c'};
char cs [] = "abc";
//foo(cs);
Str s1;
Str s2 = "a string";
cout << s1 << endl;
cout << s2 << endl;
}

