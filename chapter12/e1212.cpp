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
using std::make_shared;

void process(shared_ptr<int> ptr){} 

int main (int argc, char** argv){

auto p = new int();
auto sp = make_shared<int>();

process(sp);
// ok
//process(new int());
// illegal 
//process(p);
// illegal 
process(shared_ptr<int>(p));
// legal, but data of p is deleted afterwards 

}
