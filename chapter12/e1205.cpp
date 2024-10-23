



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

/*
if it's explicit, we can not assign initialise it   
and there will be no auto-conversion
which is inconvinient and unintuitive for this case


*/

  //StrBlob b2({"string", "an", "the"});
  //StrBlob b2{"string", "an", "the"};
  // ok
  StrBlob b2 = {"string", "an", "the"};
  // this will cause error


}
