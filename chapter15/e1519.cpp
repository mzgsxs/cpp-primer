#include<iostream>
using std::ostream;
using std::cout;
using std::endl;



class Base {
public:
  float pub_mem; // publicmember
protected:
  int prot_mem; // protectedmember
private:
  char priv_mem; // privatemember
};

struct Pub_Derv : public Base {
  // ok: derived classes can access protectedmembers
  int f() { return prot_mem; }
  void memfcn(Base &b) { b = *this; }
  // error: privatemembers are inaccessible to derived classes
  //char g() { return priv_mem; }
};

struct Prot_Derv : protected Base {
  int f1() const { return prot_mem; }
  void memfcn(Base &b) { b = *this; }
};

struct Priv_Derv : private Base {
  // privatederivation doesn’t affect access in the derived class
  int f1() const { return pub_mem; }
  //int f1() const { return prot_mem; }
  void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Public : public Pub_Derv {
  // ok: Base::prot_memremains protectedin Pub_Derv
  int use_base() { return prot_mem; }
  void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Protected : public Prot_Derv {
  // ok: Base::prot_memremains protectedin Pub_Derv
  int use_base() { return prot_mem; }
  void memfcn(Base &b) { b = *this; }
};

struct Derived_from_Private : public Priv_Derv {
  // error: Base::prot_memis privatein Priv_Derv
  //int use_base() { return prot_mem; }
  // error
  //void memfcn(Base &b) { b = *this; }
};



int main(int argc, char ** argv){
Pub_Derv d1;
Priv_Derv d2;
Prot_Derv d3;
/*
derived classes from Base's member and friend functions can do conversion 
no matter what the inheritance access modifier is
*/
Derived_from_Public dd1;
Derived_from_Private dd2;
Derived_from_Protected dd3;
/*
double derived (grandchild) classes of Base can do conversion
only if derived (child) classes of Base's inheritance access modifer is either
public or protected
*/
}
