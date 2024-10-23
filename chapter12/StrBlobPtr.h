#ifndef STR_BLOB_PTR_H
#define STR_BLOB_PTR_H 


#include<vector>
#include<string>

#include<memory>

#include"StrBlob.h"
// It's really acting as an iterator
class StrBlobPtr {
public:
  StrBlobPtr():pos(0) {}
  StrBlobPtr(StrBlob & sb, StrBlob::size_type position=0):
    wptr(sb.sp_data), pos(position) {}
  std::string & operator * () const;
  StrBlobPtr & operator ++ ();
  bool operator != (StrBlobPtr const & other) const 
    { return pos != other.pos; }

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
  return ret;
}


std::string & StrBlobPtr::operator * 
() const
{
  auto sp = check(pos, "dereference past end");
  return sp->at(pos);
}


StrBlobPtr & StrBlobPtr::operator ++ 
()
{
  auto sp = check(pos, "increment past end of StrBlobPtr");
  ++pos;
  return * this;
}


#endif
