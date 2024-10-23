#ifndef STR_BLOB_VALUE_PTR_H
#define STR_BLOB_VALUE_PTR_H 


#include<vector>
#include<string>

#include<memory>

#include"StrBlobValue.h"
// It's really acting as an iterator
class StrBlobValuePtr {
public:
  StrBlobValuePtr():pos(0) {}
  StrBlobValuePtr(StrBlobValue & sb, StrBlobValue::size_type position=0):
    wptr(sb.sp_data), pos(position) {}
  std::string & operator * () const;
  StrBlobValuePtr & operator ++ ();
  bool operator != (StrBlobValuePtr const & other) const 
    { return pos != other.pos; }

private:
  std::shared_ptr<std::vector<std::string>> check
    (StrBlobValue::size_type, std::string const &) const;
  // data
  std::weak_ptr<std::vector<std::string>> wptr;
  StrBlobValue::size_type pos;

};


std::shared_ptr<std::vector<std::string>> StrBlobValuePtr::check
(StrBlobValue::size_type idx, std::string const & msg) const
{
  auto ret = wptr.lock();
  if (!ret) throw std::runtime_error("unbound StrBlobValuePtr");
  if (idx >= ret->size()) throw std::out_of_range(msg); 
  return ret;
}


std::string & StrBlobValuePtr::operator * 
() const
{
  auto sp = check(pos, "dereference past end");
  return sp->at(pos);
}


StrBlobValuePtr & StrBlobValuePtr::operator ++ 
()
{
  auto sp = check(pos, "increment past end of StrBlobValuePtr");
  ++pos;
  return * this;
}


#endif
