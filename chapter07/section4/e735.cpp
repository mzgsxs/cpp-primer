#include<string>
using std::string;

#include<iostream>
using std::cout;
using std::endl;

typedef string Type;
Type initVal(){cout << "initVal global\n"; return "dfwq";};

class Exercise {
   public:
       typedef double Type;
       //::Type setVal(::Type); // Exercise::Type
       Type setVal(Type); // Exercise::Type
       Type initVal(){cout << "initVal local\n"; return 0.13;}; // Exercise::initVal
   private:
       int val;
};

Type Exercise::setVal(Type parm) { // global "Type", i.e. string
  //val = parm + initVal(); // global "initVal"
  //return val;
  return "string";
}

int main(){
  initVal();
  Exercise e;
  //cout << e.setVal("ok") << endl;
  cout << e.setVal(3.14) << endl;
  cout << e.initVal() << endl;
}
