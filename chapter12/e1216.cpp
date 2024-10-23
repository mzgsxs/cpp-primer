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

int main (int argc, char** argv){

unique_ptr<int> up_int(new int(42));
auto up_int2(up_int);
auto up_int3 = up_int;

}
