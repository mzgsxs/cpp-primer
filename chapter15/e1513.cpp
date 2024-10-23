#include<string>
using std::string;
#include<iostream>
using std::ostream;
using std::cout;
using std::endl;


class base {
public:
 string name() { return basename; }
  virtual void print(ostream &os) { os << basename; }
private:
  string basename{"name"};
};

class derived : public base {
public:
  // needs a scope operator!!!
  void print(ostream &os) { base::print(os); os << " " << i; }
private:
  int i{10};
};


int main(int argc, char** argv){
base b;
b.print(cout);
cout << endl;

derived d;
d.print(cout);
// calls the print method from base, then excute the rest of the code
cout << endl;
}
