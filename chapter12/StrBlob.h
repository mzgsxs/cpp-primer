#ifndef STR_BLOB_H
#define STR_BLOB_H 

#include<vector>
#include<string>
using std::vector;
using std::string;

#include<initializer_list>
using std::initializer_list;

#include<memory>
using std::shared_ptr;
using std::make_shared;

class StrBlobPtr;
class ConstStrBlobPtr;

class StrBlob
{
friend class StrBlobPtr;
friend class ConstStrBlobPtr;

public:
  // Types
  using size_type = vector<string>::size_type;  
  /* we dont need to define those in order for ranged for to work
     but it's still nice to have them */
  using iterator = StrBlobPtr;
  using const_iterator = ConstStrBlobPtr;

  // Constructors
  StrBlob();
  explicit StrBlob(initializer_list<string>);

  // Methods
  size_type size() const 
    {return sp_data->size();};
  bool empty() const 
    {return sp_data->empty();};

  /* if member function is const, then it can be used 
     if object of this class is const */
  void push_back(string const & s) 
    {sp_data->push_back(s);};
  void pop_back();
  
  /* we dont want the above two method to be called 
     if an object of this class is const */
  string & at(size_type idx) const;
  string & front() const;
  string & back() const;
  inline StrBlobPtr begin();
  inline StrBlobPtr end();
  inline ConstStrBlobPtr begin() const;
  inline ConstStrBlobPtr end() const;

private:
  //Data
  shared_ptr<vector<string>> sp_data;
  //Internal method
  void check(size_type i, string const & msg) const
    { if (sp_data->size() < i) throw std::out_of_range(msg);}
};




StrBlob::StrBlob (): 
  sp_data(make_shared<vector<string>>()){}


StrBlob::StrBlob
(initializer_list<string> il):
  sp_data(make_shared<vector<string>>(il)){}


void StrBlob::pop_back ()
{
  check(0, "pop_back on empty StrBlob");
  sp_data->pop_back();
}

string & StrBlob::at(size_type idx) const
{
  check(idx, "out of range of StrBlob");
  return sp_data->at(idx);
}

string & StrBlob::front () const
{
  check(0, "front on empty StrBlob");
  return sp_data->front();
}


string & StrBlob::back () const
{
  check(0, "back on empty StrBlob");
  return sp_data->back();
}


#include"StrBlobPtr.h"
inline
StrBlobPtr StrBlob::begin() 
{ return StrBlobPtr(*this); }

inline
StrBlobPtr StrBlob::end()
{ return StrBlobPtr(*this, sp_data->size()); }


#include"ConstStrBlobPtr.h"
inline
ConstStrBlobPtr StrBlob::begin() const
{ return ConstStrBlobPtr(*this); }

inline
ConstStrBlobPtr StrBlob::end() const
{ return ConstStrBlobPtr(*this, sp_data->size()); }


#endif
