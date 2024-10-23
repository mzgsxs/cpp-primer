#include<string>

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
    
  HasPtr(HasPtr && p) noexcept : ps(p.ps), i(p.i) {p.ps = 0;}

  //HasPtr & operator = (HasPtr hp) {
  //  swap(*this, hp);
  //  return *this;
  //}

  // avoids copy and the call to move constructor & swap function
  HasPtr & operator = (HasPtr&& rhp) noexcept {
    ps = std::move(rhp.ps);
    i = std::move(rhp.i);
    rhp.ps = nullptr;
    return *this;
  }

  ~HasPtr(){ delete ps;}

  void print(){ cout << *ps << endl;}

private:
  std::string * ps;
  int i;
};



