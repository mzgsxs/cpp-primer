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
/*
If swap is defined for this class
sort will use it 
otherwise standard swap is used and temporary is created
*/

class HasPtr {
friend
//void swap_hp(HasPtr &lhs, HasPtr &rhs);
void swap(HasPtr &lhs, HasPtr &rhs);


friend 
bool operator < (HasPtr const & lhs, HasPtr const & rhs){
  cout << "compare " << *lhs.ps << " " << *rhs.ps << endl;
  cout <<  &lhs << " " << &rhs << endl;
  return *lhs.ps < *rhs.ps;
}

public:
  HasPtr(std::string const & s = std::string()):
    ps(new std::string(s)), i(0) {}

  HasPtr(HasPtr const & h): 
    ps(new std::string(*(h.ps))), i(h.i) {}
    
  HasPtr & operator = (HasPtr hp) {
    cout << "assign " << *ps << " " << *hp.ps << endl;
    cout <<  this << " " << &hp << endl;
    //swap_hp(*this, hp);
    swap(*this, hp);
    return *this;
  }

  ~HasPtr(){ delete ps;}

  void print(){ cout << *ps << endl;}

private:
  std::string * ps;
  int i;
};

inline
void swap(HasPtr &lhs, HasPtr &rhs){
  cout << "swap " << *lhs.ps << " " << *rhs.ps << endl;
  cout <<  &lhs << " " << &rhs << endl;
  using std::swap;
  // !!!! IMPORTANT
  // always bring all options and let the compiler to 
  // use the best one (i.e the most specialised one)
  swap(lhs.ps, rhs.ps);
  swap(lhs.i, rhs.i);
}

int main (int argc, char** argv){
HasPtr h1("a");
HasPtr h2("ccc");
HasPtr h3("bb");
vector<HasPtr> vhp{h1,h2,h3};
std::sort(vhp.begin(),vhp.end());

}
