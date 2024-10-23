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

  StrVec(std::initializer_list<Str> il): StrVec(){
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
  
  void push_back(Str const & s){
    if (!reach_capacity()){
      alloc.construct(next++, s);
    }
    else {
      reallocate(capacity()<<1);
      push_back(s);
    }
  }

  Str * begin() const {return start;}
  Str * end() const { return next;}

  Str at(size_t i){return *(start+i);} 


private:
  static std::allocator<Str> alloc;
  Str * start; 
  Str * next; 
  Str * limit; 

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
    Str * new_start = alloc.allocate(new_size); 
    //Str * new_next = std::uninitialized_copy(start,next,new_start);
    Str * new_next = new_start;
    std::for_each(start, next, 
      [&new_next](Str & p){alloc.construct(new_next++, std::move(p));});

    free();
    start = new_start;
    next = new_next;
    limit = start+new_size;
  }


};

std::allocator<Str> StrVec::alloc;

#endif
