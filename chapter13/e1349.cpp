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
#include"StrVecStr.h"
#include"Message.h"


int main (int argc, char** argv){
Str s1 = "string";
Str s2 = "string2";
Str s3 = "string2";

cout << "\t\t----exmaple 1----" << endl;
s3 = std::move(s1 + s2);

cout << "\t\t----exmaple 2----" << endl;
vector<Str> vs;
vs.push_back(s1);
vs.push_back(s1);
vs.push_back(s1);

cout << "\t\t----exmaple 2----" << endl;
StrVec sv;
sv.push_back(s1);
cout << sv.capacity() << endl;
sv.push_back(s1);
cout << sv.capacity() << endl;
sv.push_back(s1);
cout << sv.capacity() << endl;
}

