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

class HasPtr {
friend
//static 
void swap(HasPtr &lhs, HasPtr &rhs)
{
  std::swap(lhs.ps, rhs.ps);
  std::swap(lhs.i, rhs.i);
}

public:
  HasPtr(std::string const & s = std::string()):
    ps(new std::string(s)), i(0) {}

  HasPtr(HasPtr const & h): 
    ps(new std::string(*(h.ps))), i(h.i) {}
    
  HasPtr & operator = (HasPtr hp) {
    swap(*this, hp);
    return *this;
  }

  ~HasPtr(){ delete ps;}

  void print(){ cout << *ps << endl;}

private:
  std::string * ps;
  int i;
};



int main (int argc, char** argv){
HasPtr h1("a string");
HasPtr h2("yoyo lll");
h1.print();
h2.print();
h2 = h1;
h1.print();
h2.print();
}
