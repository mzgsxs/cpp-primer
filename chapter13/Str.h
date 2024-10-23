#ifndef STR_H
#define STR_H 
#include<string.h>
#include<iterator>
#include<memory>
#include<initializer_list>
#include<iostream>

class Str{
friend void swap(Str & lhs, Str & rhs){
  using std::swap;
  swap(lhs.start, rhs.start);
  swap(lhs.next, rhs.next);
  swap(lhs.limit, rhs.limit);
}

public:
  using size_type = size_t; 

  Str(): 
    start(nullptr), next(nullptr), limit(nullptr){}

  Str(std::initializer_list<char> il): Str(){
    std::cout << "init-list constructor called" << std::endl;
    for(auto & s:il) push_back(s);
  }

  Str(char const cs[]): Str(){
    std::cout << "c-string constructor called" << std::endl;
    while(*cs!='\0') push_back(*cs++);
  }

  Str(Str const & sv){
    std::cout << "copy constructor called" << std::endl;
    start = alloc.allocate(sv.capacity());
    next = std::uninitialized_copy(sv.start, sv.next, start);
    limit = start + sv.capacity();
  }

  Str(Str && rs) noexcept: 
    start(std::move(rs.start)), next(std::move(rs.next)), limit(std::move(rs.limit)){
    std::cout << "move constructor called" << std::endl;
    rs.start = rs.next = rs.limit = nullptr;
  }

  Str & operator = (Str sv){
    std::cout << "copy assignment called" << std::endl;
    swap(*this, sv); 
    return *this;
  }

  ~Str(){ free();}

  size_t const size() const{
    return next - start;
  }
  size_t const capacity() const{
    return limit - start; 
  }

  void reserve(size_t n) {
    if (n > capacity()) reallocate(n);
  }
  
  void push_back(char const & s){
    if (!reach_capacity()){
      alloc.construct(next++, s);
    }
    else {
      reallocate(capacity()<<2);
      push_back(s);
    }
  }

  char * begin() const {return start;}
  char * end() const { return next;}

  char at(size_t i){return *(start+i);} 


private:
  static std::allocator<char> alloc;
  char * start; 
  char * next; 
  char * limit; 

  bool reach_capacity() const{
    return next == limit;
    // leave one slot for end() pointer
  }

  void free(){
    auto p = next; //exception-safer???
    while (p!=start) alloc.destroy(--p);
    alloc.deallocate(start, capacity());
  }

  void reallocate(size_t n){
    size_t new_size = (n)?n:2;
    char * new_start = alloc.allocate(new_size); 
    char * new_next = new_start;
    std::for_each(start, next, 
      [&new_next](char & p){alloc.construct(new_next++, std::move(p));});

    free();
    start = new_start;
    next = new_next;
    limit = start+new_size;
  }


};

std::allocator<char> Str::alloc;

std::ostream & operator << (std::ostream & os, Str const & s) {
  auto p = s.begin();
  while(p != s.end())
    os << *p++;
  return os;
}


Str operator + (Str const & s1, Str const & s2){
  Str s = s1;
  auto p = s2.begin();
  while (p!=s2.end())
    s.push_back(*p++);
  return s;
}







#endif
