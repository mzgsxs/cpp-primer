#ifndef CONST_STR_BLOB_VALUE_PTR_H
#define CONST_STR_BLOB_VALUE_PTR_H 


#include<vector>
#include<string>

#include<memory>

#include"StrBlobValue.h"
// It's really acting as an iterator
class ConstStrBlobValuePtr {
public:
  ConstStrBlobValuePtr():pos(0) {}
  ConstStrBlobValuePtr(StrBlobValue const & sb, StrBlobValue::size_type position=0):
    wptr(sb.sp_data), pos(position) {}

  std::string const & operator * () const;
  ConstStrBlobValuePtr & operator ++ ();
  bool operator != (ConstStrBlobValuePtr const & other) const 
    { return pos != other.pos; }

private:
  std::shared_ptr<std::vector<std::string> const> check
    (StrBlobValue::size_type, std::string const &) const;
  // data
  std::weak_ptr<std::vector<std::string> const> wptr;
  StrBlobValue::size_type pos;

};


std::shared_ptr<std::vector<std::string> const> ConstStrBlobValuePtr::check
(StrBlobValue::size_type idx, std::string const & msg) const
{
  auto ret = wptr.lock();
  if (!ret) throw std::runtime_error("unbound ConstStrBlobValuePtr");
  if (idx >= ret->size()) throw std::out_of_range(msg); 
  return ret;
}


std::string const & ConstStrBlobValuePtr::operator * 
() const
{
  auto sp = check(pos, "dereference past end");
  return sp->at(pos);
}


ConstStrBlobValuePtr & ConstStrBlobValuePtr::operator ++ 
()
{
  auto sp = check(pos, "increment past end of ConstStrBlobValuePtr");
  ++pos;
  return * this;
}


#endif
