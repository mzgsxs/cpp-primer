#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

template <typename elemType> 
class ListItem;

template <typename elemType> 
class List 
{
public:
  List<elemType>();
  List<elemType>(const List<elemType> &);
  List<elemType>& operator=(const List<elemType> &);
  ~List();
  void insert(ListItem<elemType> *ptr, elemType value);
private:
  ListItem<elemType> *front, *end;
};



int 
main(int argc, char** argv)
{
  return 0;
}
