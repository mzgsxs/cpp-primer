

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

class Point;

Point global;
Point foo_bar(Point arg) // copy C
{
  // copy C, copy C in heap
  Point local = arg, *heap = new Point(global);
  // copy assign
  *heap = local;
  // copy assign x 2 
  Point pa[4] = { local, *heap };
  // copy assign
  return *heap;
}

int main (int argc, char** argv){




}
