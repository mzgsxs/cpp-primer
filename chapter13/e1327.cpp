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
    ps(new std::string(s)), i(0), use(new std::size_t(1)) {}

  HasPtr(HasPtr const & h): 
    ps(h.ps), i(h.i), use(h.use) { ++*use; }
    
  HasPtr & operator = (HasPtr const & h) {
    if (--*use == 0){
      delete ps;
      delete use;
    }
    ps = h.ps;
    use = h.use;
    i = h.i;
    ++*use;
    return *this;
  }

  ~HasPtr(){
    if (--*use == 0){
    delete ps;
    delete use;
    }
  }

//private:
  std::string * ps;
  int i;
  std::size_t * use;
};

int main (int argc, char** argv){
HasPtr h1("a string");
HasPtr h2("yoyo lll");

h2 = h1;


}
