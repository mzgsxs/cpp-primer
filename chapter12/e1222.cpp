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
#include"ConstStrBlobPtr.h"

int main (int argc, char** argv){

//StrBlob const sb{"ss","aa"};
StrBlob const sb{"ss","aa"};
ConstStrBlobPtr p(sb);
cout << *p << endl;
//(*p).clear();
//cout << *p << endl;


for (auto & p : sb)
{// it will be const
  p.clear();
  cout << p << endl;
}


std::vector<std::string> const vs{"aa", "bb"};
//vs.push_back("cc");
//vs.at(0).clear();

// !!! no need to put vector<string const> const

}
