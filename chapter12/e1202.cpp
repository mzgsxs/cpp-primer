



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


#include"StrBlob.h"
int main (int argc, char** argv){

  StrBlob b1;
  StrBlob const b2 = {"string", "an", "the"};
  b1 = b2;
  b2.push_back("about");
  cout << b2.front() << endl; 
  b2.front().clear(); 
  cout << b2.front() << endl; 

}
