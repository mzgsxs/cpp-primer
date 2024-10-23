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
  // error: privatemembers are inaccessible to derived classes
  //char g() { return priv_mem; }
};

struct Prot_Derv : protected Base {
  int f1() const { return prot_mem; }
};

struct Priv_Derv : private Base {
  // privatederivation doesn’t affect access in the derived class
  int f1() const { return pub_mem; }
  //int f1() const { return prot_mem; }
};

struct Derived_from_Public : public Pub_Derv {
  // ok: Base::prot_memremains protectedin Pub_Derv
  int use_base() { return prot_mem; }
};

struct Derived_from_Protected : public Prot_Derv {
  // ok: Base::prot_memremains protectedin Pub_Derv
  int use_base() { return prot_mem; }
};

struct Derived_from_Private : public Priv_Derv {
  // error: Base::prot_memis privatein Priv_Derv
  //int use_base() { return prot_mem; }
};



int main(int argc, char ** argv){
Pub_Derv d1;
Priv_Derv d2;
Prot_Derv d3;
Derived_from_Public dd1;
Derived_from_Private dd2;
Derived_from_Protected dd3;

Base *p;
p = &d1; // d1has type Pub_Derv
//p = &d2; // d2has type Priv_Derv
//p = &d3; // d3has type Prot_Derv
p = &dd1; // dd1has type Derived_from_Public
//p = &dd2; // dd2has type Derived_from_Private
//p = &dd3; // dd3has type Derived_from_Protected

}
