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

int *pa = new int[10];
delete[]pa;

shared_ptr<int> sp_int_array(new int[13], [](int * p){delete [] p;});
unique_ptr<int[]> up_int_array(new int[13]);
}
