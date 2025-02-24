#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

template <class T>
class MyClass
{
public:
  MyClass();
  MyClass & operator++();// prefix increment
  //MyClass & operator++(int);// postfix increment
  T t;
  float f{0.0};

private:
  int i{0};
};


template <class T>
MyClass<T>::MyClass(): i{1}
{}


template <class T>
MyClass<T> & 
MyClass<T>::operator++()
{
  return *this;
}


template <class T>
int
MyFun()
{
  T t;
  return 0;
};


int 
main(int argc, char** argv)
{}
