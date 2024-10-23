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

#include<memory>
using std::shared_ptr;
using std::unique_ptr;
using std::make_shared;


#include"StrBlob.h"
#include"StrBlobPtr.h"

int main (int argc, char** argv){

StrBlob sb{"paul","mu"}, sb2;
sb.push_back("aa");
sb.push_back("bb");
sb.push_back("cc");
cout << sb.size() << endl;
sb2 = sb;
cout << sb2.size() << endl;
StrBlob * sbp = &sb;
cout << sbp->size() << endl;
StrBlobPtr p(sb);
cout << *p << endl;
++p;
cout << *p << endl;

auto p2 = sb.begin();
cout << *p2 << endl;

}
