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

int ix = 1024, *pi = &ix, *pi2 = new int(2048);
typedef unique_ptr<int> IntP;

//IntP p0(ix); 
// illegal
//IntP p1(pi);
// legal but error, data not on heap
IntP p2(pi2);
// ok
//IntP p3(&ix);
// legal but error, data on stack
IntP p4(new int(2048));
// ok
//IntP p5(p2.get());
// need to release 


}
