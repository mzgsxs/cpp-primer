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

#include"StrVec.h"
int main (int argc, char** argv){

StrVec sv, sv2;
sv.push_back("first string");
cout << sv.size() << endl;
cout << sv.capacity() << endl;

for(size_t c(0);c!=100;++c){
  sv.push_back("a string");
}

sv.push_back("last string");
cout << sv.size() << endl;
cout << sv.capacity() << endl;
cout << *sv.begin() << endl;
cout << *sv.end() << endl;

StrVec sv3(sv);
sv2 = sv;

cout << sv.size() << endl;
cout << sv2.size() << endl;
cout << sv3.size() << endl;


}

