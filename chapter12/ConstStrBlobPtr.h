#ifndef CONST_STR_BLOB_PTR_H
#define CONST_STR_BLOB_PTR_H 


#include<vector>
#include<string>

#include<memory>

#include"StrBlob.h"
// It's really acting as an iterator
class ConstStrBlobPtr {
public:
  ConstStrBlobPtr():pos(0) {}
  ConstStrBlobPtr(StrBlob const & sb, StrBlob::size_type position=0):
    wptr(sb.sp_data), pos(position) {}

  std::string const & operator * () const;
  ConstStrBlobPtr & operator ++ ();
  bool operator != (ConstStrBlobPtr const & other) const 
    { return pos != other.pos; }

private:
  std::shared_ptr<std::vector<std::string> const> check
    (StrBlob::size_type, std::string const &) const;
  // data
  std::weak_ptr<std::vector<std::string> const> wptr;
  StrBlob::size_type pos;

};


std::shared_ptr<std::vector<std::string> const> ConstStrBlobPtr::check
(StrBlob::size_type idx, std::string const & msg) const
{
  auto ret = wptr.lock();
  if (!ret) throw std::runtime_error("unbound ConstStrBlobPtr");
  if (idx >= ret->size()) throw std::out_of_range(msg); 
  return ret;
}


std::string const & ConstStrBlobPtr::operator * 
() const
{
  auto sp = check(pos, "dereference past end");
  return sp->at(pos);
}


ConstStrBlobPtr & ConstStrBlobPtr::operator ++ 
()
{
  auto sp = check(pos, "increment past end of ConstStrBlobPtr");
  ++pos;
  return * this;
}


#endif
