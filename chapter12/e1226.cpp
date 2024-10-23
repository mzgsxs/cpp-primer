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
using std::allocator;



int main (int argc, char** argv){

size_t n{10};
/* 
STEP (1)
  Allocation
    makesure it's capacity is the specified size
//string * const p = new string[n]; 
*/
allocator<string> alloc;
string * const start_p = alloc.allocate(n);


/* 
STEP (2)
  Construction
    instantiate objects of the class in memory
*/
string s, * q = start_p; // q points to the first string
while (cin >> s && q != start_p + n)
{
  alloc.construct(q++, s);
}


//delete[] p;
/* 
STEP (3)
  Destuction 
    delete contents in the memory
*/
size_t const size = q - start_p; // assign a new value to*q
while (q!=start_p)
  alloc.destroy(--q);


/* 
STEP (4)
  Deallocation 
    make those memory free again
*/
alloc.deallocate(start_p, n);

}
