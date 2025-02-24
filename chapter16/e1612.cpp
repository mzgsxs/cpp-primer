#include <iostream>

#include <memory>
#include <vector>
#include <initializer_list>

template <typename T> 
class Blob 
{
public:
  typedef T value_type;
  typedef typename std::vector<T>::size_type size_type;
  // constructors
  Blob();
  Blob(std::initializer_list<T> il);
  // number of elements in the Blob
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }
  // add and remove elements
  void push_back(const T &t) {data->push_back(t);}
  // move version; see § 13.6.3 (p. 548)
  void push_back(T &&t) { data->push_back(std::move(t)); }
  void pop_back();
  // element access
  T& back();
  T& operator[](size_type i); // defined in § 14.5 (p. 566)

private:
  std::shared_ptr<std::vector<T>> data;
  // throws msg if data[i]isn’t valid
  void check(size_type i, const std::string &msg) const;
};


template <typename T> 
Blob<T>::Blob():
data(std::make_shared<std::vector<T>>())
{
}

template <typename T> 
Blob<T>::Blob(std::initializer_list<T> il):
data(std::make_shared<std::vector<T>>(il))
{
}

template <typename T> 
void 
Blob<T>::pop_back()
{
  check(0, "pop_back on empty Blob");
  data->pop_back();
}

template <typename T> 
T& 
Blob<T>::back()
{
  check(0, "back on empty Blob");
  return *(data->end()-1);
}

template <typename T> 
T& 
Blob<T>::operator[](size_type i) // defined in § 14.5 (p. 566)
{
  check(i, "subscript out of range");
  return (*data)[i];
}

template <typename T> 
void 
Blob<T>::check(size_type i, std::string const & msg) const
{
  if (i > data->size()-1)
    throw std::out_of_range(msg);
}


int 
main(int argc, char** argv)
{
  Blob<int> ib1;
  Blob<int> ib2{1,2,3};
  std::cout << ib2[1] << std::endl;
  //std::cout << ib2[3] << std::endl;
  std::cout << ib2.back() << std::endl;
  ib2.pop_back();
  std::cout << ib2.back() << std::endl;

  return 0;
}

