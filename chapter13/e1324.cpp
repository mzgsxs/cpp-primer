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
public:
  HasPtr(std::string const & s = std::string()):
    ps(new std::string(s)), i(0) {}

  HasPtr(HasPtr const & h): 
    ps(new std::string(*(h.ps))), i(h.i) {}
    
  HasPtr & operator = (HasPtr const & h) {
    auto newp = new string(*h.ps);
    delete ps;
    ps = newp;
    i = h.i;
    return *this;
  }


//private:
  std::string * ps;
  int i;
};

int main (int argc, char** argv){
HasPtr h1("a string");
HasPtr h2("yoyo lll");
HasPtr h3;
cout << *(h1.ps) << endl;
cout << *(h2.ps) << endl;
cout << *(h3.ps) << endl;

h2 = h2;
cout << *(h1.ps) << endl;
cout << *(h2.ps) << endl;
// memory leak!!!
}
