#include<string>
using std::string;
#include<iostream>
using std::ostream;
using std::cout;
using std::endl;


class base {
public:
  string name() { 
    cout << "base name" << endl;
    return basename; }
  virtual void print(ostream &os = cout) {
    os << "base print" << endl;
    os << basename; }
private:
  string basename{"name"};
};

class derived : public base {
public:
  // needs a scope operator!!!
  void print(ostream &os = cout) { 
    os << "derived print" << endl;
    base::print(os); 
    os << " " << i; }
private:
  int i{10};
};


int main(int argc, char** argv){
base bobj; base *bp1 = &bobj; base &br1 = bobj;
derived dobj; base *bp2 = &dobj; base &br2 = dobj;

//(a) base
bobj.print(); 
cout << "a.)" << endl;
//(b) derived
dobj.print(); 
cout << "b.)" << endl;
//(c) base
bp1->name();
cout << "c.)" << endl;
//(d) base
bp2->name(); 
cout << "d.)" << endl;
//(e) base
br1.print(); 
cout << "e.)" << endl;
//(f) derived
br2.print();
cout << "f.)" << endl;


}
