#include<vector>
using std::vector;

class Foo {
public:
  Foo sorted() &&; // may run on modifiable rvalues
  Foo sorted() const &; // may run on any kind of Foo
  // other members of Foo
private:
  vector<int> data={1,3,2};
};

// this object is an rvalue, so we can sort in place
Foo Foo::sorted() &&
{
  cout << "rvalue sorted called" << endl;
  sort(data.begin(), data.end());
  return *this;
}
/*
// this object is either constor it is an lvalue; either way we can’t sort in place
Foo Foo::sorted() const & {
  Foo ret(*this); // make a copy
  sort(ret.data.begin(), ret.data.end()); // sort the copy
  return ret; // return the copy
}
*/
Foo Foo::sorted() const & 
{
  cout << "const rvalue or lvalue sorted called" << endl;
  //Foo ret(*this);
  //return std::move(ret).sorted();
  return Foo(*this).sorted();
}




