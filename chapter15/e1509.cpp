#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

/*
1.) Polymorphism
In polymorphism, the static type can be a base class, while the dynamic type is a derived class.
*/
class Base {
public:
    virtual void print() { std::cout << "Base" << std::endl; }
};

class Derived : public Base {
public:
    void print() override { std::cout << "Derived" << std::endl; }
    void new_method() { std::cout << "New method" << std::endl; }
};


/* !!! C++17
2.) std::any
std::any type allows you to store objects of any type, but the static type is std::any while the dynamic type is whatever is stored inside.
*/
#include <any>

/*
3.) dynamic_cast
cast to derived class directly, derived exclusive methods are now avaliable 
*/
int main(int argc, char** argv){
// 1.)
Base* obj = new Derived();  // Static type: Base*, Dynamic type: Derived*
obj->print();               // Outputs: Derived
//obj->new_method();
// fail, not been able to find derived methods

// 2.)
std::any x = Base();          // Static type: std::any, Dynamic type: int
std::cout << x.type().name() << std::endl;
std::any_cast<Base>(x).print();
x = std::string("Hello"); // Static type: std::any, Dynamic type: std::string
std::cout << x.type().name() << std::endl;

// 3.)
Derived * dp = dynamic_cast<Derived*>(obj);
dp->print();
dp->new_method();

Base * bp = new Base(); 
Derived * bdp = dynamic_cast<Derived*>(bp);
// casting is successful, but segmentation error occur when accessing derived class methods
bdp->print();
//bdp->new_method();

delete bp;
delete obj;
}
