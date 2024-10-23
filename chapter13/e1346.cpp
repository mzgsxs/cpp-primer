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


int f(){ return 0;}
int main (int argc, char** argv){
vector<int> vi(100);

int&& r1 = f();

int& r21 = vi[0];

int& r32 = r1;

int&& r4 = vi[0] * f();


}

