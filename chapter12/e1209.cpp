



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

int main (int argc, char** argv){
  int *q = new int(42), *r = new int(100);
  r = q;
  // original pointer to r is lost
  auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
  r2 = q2;
  // r2&q2 point to 42, memory of int 100 is freed 
}
