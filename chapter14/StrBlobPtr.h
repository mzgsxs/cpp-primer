#ifndef STR_BLOB_PTR_H
#define STR_BLOB_PTR_H 


#include<vector>
#include<string>

#include<memory>

#include"StrBlob.h"
// It's really acting as an iterator
class StrBlobPtr {
friend bool operator == (StrBlobPtr const & lhs, StrBlobPtr const & rhs);
friend StrBlobPtr operator - 
(StrBlobPtr const & lhs, std::size_t const rhs);
friend std::size_t operator - 
(StrBlobPtr const & lhs, StrBlobPtr const & rhs);
friend StrBlobPtr operator + 
(StrBlobPtr const & lhs, std::size_t const rhs);
// we probably dont need this
//friend std::size_t operator + 
//(StrBlobPtr const & lhs, StrBlobPtr const & rhs);


public:
  StrBlobPtr():pos(0) {}
  StrBlobPtr(StrBlob & sb, StrBlob::size_type position=0):
    wptr(sb.sp_data), pos(position) {}
  std::string & operator * () const;
  std::string * operator -> () const;
  StrBlobPtr & operator -- (); 
  StrBlobPtr & operator ++ ();
  StrBlobPtr operator -- (int);
  StrBlobPtr operator ++ (int);
  StrBlobPtr & operator -= (std::size_t);
  StrBlobPtr & operator += (std::size_t);

  bool operator != (StrBlobPtr const & other) const 
    { return pos != other.pos; }

  std::string & operator [] (std::size_t const idx) { 
    auto sp = check(idx, "index out of range");
    return sp->at(pos);// ->at() also performs the check
  }
private:
  std::shared_ptr<std::vector<std::string>> check
    (StrBlob::size_type, std::string const &) const;
  // data
  std::weak_ptr<std::vector<std::string>> wptr;
  StrBlob::size_type pos;

};


std::shared_ptr<std::vector<std::string>> StrBlobPtr::check
(StrBlob::size_type idx, std::string const & msg) const
{
  auto ret = wptr.lock();
  if (!ret) throw std::runtime_error("unbound StrBlobPtr");
  if (idx >= ret->size()) throw std::out_of_range(msg); 
  // decrement of size_t at 0 will give it a value of 
  // maxmium value possible for size_t
  return ret;
}


std::string & StrBlobPtr::operator * 
() const
{
  auto sp = check(pos, "dereference past end");
  return sp->at(pos);
}

std::string * StrBlobPtr::operator ->
() const
{
  return & (this->operator*());
}

StrBlobPtr & StrBlobPtr::operator -- 
()
{
  auto sp = check(pos-1, "decrement past begin of StrBlobPtr");
  --pos;
  return * this;
}


StrBlobPtr & StrBlobPtr::operator ++ 
()
{
  auto sp = check(pos+1, "increment past end of StrBlobPtr");
  ++pos;
  return * this;
}

StrBlobPtr StrBlobPtr::operator -- (int)
{
  StrBlobPtr ret = *this;
  check(pos-1, "decrement past begin of StrBlobPtr");
  --pos;
  return std::move(ret);
}

StrBlobPtr StrBlobPtr::operator ++ (int)
{
  StrBlobPtr ret = *this;
  check(pos+1, "increment past end of StrBlobPtr");
  ++pos;
  return std::move(ret);
}


std::size_t operator - 
(StrBlobPtr const & lhs, StrBlobPtr const & rhs)
{
  // check if they are pointing to the same address
  auto lret = lhs.wptr.lock();
  auto rret = rhs.wptr.lock();
  if (&*lret == &*rret)
    return lhs.pos - rhs.pos; 
  else {
    throw std::invalid_argument("two pointers pointing to different objects");
    return 0; 
  }
}

StrBlobPtr operator - 
(StrBlobPtr const & lhs, std::size_t const rhs)
{
  StrBlobPtr copy = lhs;
  copy.pos -= rhs;
  return std::move(copy); 
}

/*
std::size_t operator + 
(StrBlobPtr const & lhs, StrBlobPtr const & rhs)
{
  // check if they are pointing to the same address
  auto lret = lhs.wptr.lock();
  auto rret = rhs.wptr.lock();
  if (&*lret == &*rret)
    return lhs.pos - rhs.pos; 
  else {
    throw std::invalid_argument("two pointers pointing to different objects");
    return 0; 
  }
}
*/

StrBlobPtr operator + 
(StrBlobPtr const & lhs, std::size_t const rhs)
{
  StrBlobPtr copy = lhs;
  copy.pos += rhs;
  return std::move(copy); 
}


StrBlobPtr & StrBlobPtr::operator +=
(std::size_t n)
{
  check(pos+n, "increment past end of StrBlobPtr");
  pos += n;
  return *this;
}


StrBlobPtr & StrBlobPtr::operator -=
(std::size_t n)
{
  check(pos-n, "decrement past end of StrBlobPtr");
  pos -= n;
  return *this;
}








#include<iostream>
bool operator == (StrBlobPtr const & lhs, StrBlobPtr const & rhs){
  // check position and starting point successivly
  //if ( lhs.pos != rhs.pos)
  //  return false;
  //auto nlp = lhs.wptr.lock();
  //auto nrp = rhs.wptr.lock();
  //std::cout << nlp << std::endl;
  //std::cout << nrp << std::endl;
  //if (nlp != nrp)
  //  return false;

  // or check if pointed data are the same
  //if ( nlp && nrp)
  //  return *nlp == *nrp;

  // check them togerther
  // not as good, since the starting point and position may differ
  // even if the combined address is the same
  auto nlp = lhs.wptr.lock();
  auto nrp = rhs.wptr.lock();
  std::cout << &*nlp+lhs.pos << std::endl;
  std::cout << &*nrp+rhs.pos << std::endl;
  if ((&*nlp+lhs.pos) != (&*nrp+rhs.pos))
    return false;

  return true;
}
#endif
