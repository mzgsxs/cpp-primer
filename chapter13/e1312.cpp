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

struct Sales_data {
  Sales_data()=default;
  // copy constuctor
  Sales_data(Sales_data const & a){i=11;} 
  // copy assignment
  Sales_data & operator=(Sales_data const & a){i=22; return *this;}
  ~Sales_data() {cout << 33 << endl;}

  string isbn() {return "number";}
  int i{0};
};



bool fcn(const Sales_data *trans, Sales_data accum)
{
  Sales_data item1(*trans), item2(accum);
  return item1.isbn() != item2.isbn();
}


int main (int argc, char** argv){
Sales_data s1, s2;
fcn(&s1, s2);
// desctructor been called 5 times
// when destrying:
// s1, s2, accum, item1, item2
}

