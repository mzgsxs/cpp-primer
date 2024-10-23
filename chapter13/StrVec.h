#ifndef STRVEC_H
#define STRVEC_H 
#include<memory>
#include<string>
#include<initializer_list>


class StrVec{
friend void swap(StrVec & lhs, StrVec & rhs){
  using std::swap;
  swap(lhs.start, rhs.start);
  swap(lhs.next, rhs.next);
  swap(lhs.limit, rhs.limit);
}

public:
  using size_type = size_t; 

  StrVec(): 
    start(nullptr), next(nullptr), limit(nullptr){}

  StrVec(std::initializer_list<std::string> il): StrVec(){
    for(auto & s:il) push_back(s);
  }

  StrVec(StrVec const & sv){
    start = alloc.allocate(sv.capacity());
    next = std::uninitialized_copy(sv.start, sv.next, start);
    limit = start + sv.capacity();
  }

  StrVec(StrVec && rsv) noexcept: 
    start(std::move(rsv.start)), next(std::move(rsv.next)), limit(std::move(rsv.limit)){
    std::cout << "StrVec move constructor called" << std::endl;
    rsv.start = rsv.next = rsv.limit = nullptr;
  }

  StrVec & operator = (StrVec sv){
    swap(*this, sv); 
    return *this;
  }

  ~StrVec(){ free();}

  size_t const size() const{
    return next - start;
  }
  size_t const capacity() const{
    return limit - start; 
  }

  void reserve(size_t n) {
    if (n > capacity()) reallocate(n);
  }
  
  void push_back(std::string const & s){
    if (!reach_capacity()){
      alloc.construct(next++, s);
    }
    else {
      reallocate(capacity()<<2);
      push_back(s);
    }
  }

  std::string * begin() const {return start;}
  std::string * end() const { return next;}

  std::string at(size_t i){return *(start+i);} 


private:
  static std::allocator<std::string> alloc;
  std::string * start; 
  std::string * next; 
  std::string * limit; 

  bool reach_capacity() const{
    return next == limit;
    // leave one slot for end() pointer
  }

  void free(){
    auto p = next; //exception-safer???
    while (p!=start)
      alloc.destroy(--p);
    alloc.deallocate(start, capacity());
  }
  /*
  void free(){
    std::for_each(start, next, [](string & p){alloc.destroy(&p);});
    alloc.deallocate(start, capacity());
  }
  */
  void reallocate(size_t n){
    size_t new_size = (n)?n:1;
    std::string * new_start = alloc.allocate(new_size); 
    //std::string * new_next = std::uninitialized_copy(start,next,new_start);
    std::string * new_next = new_start;
    std::for_each(start, next, 
      [&new_next](std::string & p){alloc.construct(new_next++, std::move(p));});

    free();
    start = new_start;
    next = new_next;
    limit = start+new_size;
  }


};

std::allocator<std::string> StrVec::alloc;

#endif
