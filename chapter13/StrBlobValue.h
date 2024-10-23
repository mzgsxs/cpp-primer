#ifndef STR_BLOB_VALUE_H
#define STR_BLOB_VALUE_H 

#include<vector>
#include<string>
using std::vector;
using std::string;

#include<initializer_list>
using std::initializer_list;

#include<memory>
using std::shared_ptr;
using std::make_shared;

class StrBlobValuePtr;
class ConstStrBlobValuePtr;

class StrBlobValue
{
friend class StrBlobValuePtr;
friend class ConstStrBlobValuePtr;

public:
  // Types
  using size_type = vector<string>::size_type;  
  /* we dont need to define those in order for ranged for to work
     but it's still nice to have them */
  using iterator = StrBlobValuePtr;
  using const_iterator = ConstStrBlobValuePtr;

  // Constructors
  StrBlobValue();
  explicit StrBlobValue(initializer_list<string>);
  StrBlobValue(StrBlobValue const &);

  // Methods
  size_type size() const 
    {return sp_data->size();};
  bool empty() const 
    {return sp_data->empty();};

  StrBlobValue & operator=(StrBlobValue const);


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
  inline StrBlobValuePtr begin();
  inline StrBlobValuePtr end();
  inline ConstStrBlobValuePtr begin() const;
  inline ConstStrBlobValuePtr end() const;

private:
  //Data
  shared_ptr<vector<string>> sp_data;
  //Internal method
  void check(size_type i, string const & msg) const
    { if (sp_data->size() < i) throw std::out_of_range(msg);}
};




StrBlobValue::StrBlobValue (): 
  sp_data(make_shared<vector<string>>()){}


StrBlobValue::StrBlobValue
(initializer_list<string> il):
  sp_data(make_shared<vector<string>>(il)){}


StrBlobValue::StrBlobValue
(StrBlobValue const & sbv):
  sp_data(make_shared<vector<string>>(*sbv.sp_data)){}


StrBlobValue & StrBlobValue::operator=
(StrBlobValue sbv)
{
  sp_data = sbv.sp_data;
  //std::swap(*this, sbv);
  return *this;
}





void StrBlobValue::pop_back ()
{
  check(0, "pop_back on empty StrBlobValue");
  sp_data->pop_back();
}

string & StrBlobValue::at(size_type idx) const
{
  check(idx, "out of range of StrBlobValue");
  return sp_data->at(idx);
}

string & StrBlobValue::front () const
{
  check(0, "front on empty StrBlobValue");
  return sp_data->front();
}


string & StrBlobValue::back () const
{
  check(0, "back on empty StrBlobValue");
  return sp_data->back();
}


#include"StrBlobValuePtr.h"
inline
StrBlobValuePtr StrBlobValue::begin() 
{ return StrBlobValuePtr(*this); }

inline
StrBlobValuePtr StrBlobValue::end()
{ return StrBlobValuePtr(*this, sp_data->size()); }


#include"ConstStrBlobValuePtr.h"
inline
ConstStrBlobValuePtr StrBlobValue::begin() const
{ return ConstStrBlobValuePtr(*this); }

inline
ConstStrBlobValuePtr StrBlobValue::end() const
{ return ConstStrBlobValuePtr(*this, sp_data->size()); }


#endif
