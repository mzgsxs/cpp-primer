#ifndef MY_UTILS_H 
#define MY_UTILS_H


template<class T>
void print(typename T::const_iterator & itr, typename T::const_iterator & end)
{
  while(itr != end){
    cout << (*itr++) << " , ";
  }
  cout << endl;
}


template<class T>
void print(T const & c)
{
  auto itr = c.cbegin();
  auto end = c.cend();
  print<T>(itr, end);
}

#endif
