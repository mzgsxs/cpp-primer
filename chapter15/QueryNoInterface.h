#ifndef QUERY_H
#define QUERY_H 

#include<iostream>
#include"TextQuery.h"
#include<string>
#include<memory>

class TextQuery;
class QueryResult;

class Query_base {
friend class Query;
friend class NotQuery;
protected:
  //using line_no = TextQuery::line_no;
  virtual ~Query_base(){};
private:
  virtual QueryResult eval(const TextQuery&) const = 0;
  virtual std::string rep() const = 0;

};


class Query {
// these operators need access to the shared_ptrconstructor
friend Query operator~(const Query &);
friend Query operator|(const Query&, const Query&);
friend Query operator&(const Query&, const Query&);

public:
  Query(std::string const &); // builds a new WordQuery
  //interface functions: call the corresponding Query_baseoperations
  QueryResult eval(const TextQuery & t) const
    { return q->eval(t); }
  std::string rep() const { 
    std::cout << "query rep" << std::endl;
    return q->rep(); 
  }
private:
  Query(std::shared_ptr<Query_base> query): q(query) { 
    std::cout << "query public constructor" << std::endl;
  }
  std::shared_ptr<Query_base> q;
};

class WordQuery: public Query_base{
friend class Query;
  WordQuery(std::string const & s): query_word(s) {
    std::cout << "WordQuery constructor" << std::endl;
  }
  QueryResult eval(TextQuery const & tq) const {return tq.query(query_word);} 
  std::string rep() const {return query_word;}
  std::string query_word;
};

inline 
Query::Query (std::string const & s): 
q( new WordQuery(s) ) {
  std::cout << "query public constructor" << std::endl;
}
//q( std::make_shared<WordQuery>(s) ) {}
// this will fail as it requires extra access to WordQuery constructor from make_shared


std::ostream &
operator<<(std::ostream &os, const Query &query)
{ // Query::repmakes a virtual call through its Query_basepointer to rep()
  return os << query.rep();
}




class NotQuery: public Query_base{
friend Query operator~(const Query &);
  NotQuery(std::shared_ptr<Query_base> q): query(q) {
    std::cout << "NotQuery constructor" << std::endl;
  }
  QueryResult eval(const TextQuery&) const{}
  std::string rep() const {return "~("+query->rep()+")";}
  //Query query;
  std::shared_ptr<Query_base> query;
};

inline
Query operator~(Query const & operand){
  return std::shared_ptr<Query_base>(new NotQuery(operand.q));
  //return std::make_shared<Query_base>(operand);
}




// abstract
class BinaryQuery: public Query_base{
protected:
  BinaryQuery(Query const & l, Query const & r, std::string s):
    lhs(l), rhs(r), opSym(s) {} 
  std::string rep() const {
    return "("+ lhs.rep() + " "
              + opSym + " "
              + rhs.rep() + ")";
  }
  Query lhs, rhs;
  std::string opSym;
};

class AndQuery: public BinaryQuery{
friend Query operator&(const Query&, const Query&);
  AndQuery(Query const & l,  Query const & r):
    BinaryQuery(l, r, "&") {}
  QueryResult eval(TextQuery const &) const{} 
};

inline
Query operator&(const Query& lhs, const Query& rhs){
  return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery: public BinaryQuery{
friend Query operator|(const Query&, const Query&);
  OrQuery(Query const & l, Query const & r):
    BinaryQuery(l, r, "|") {}
  QueryResult eval(TextQuery const &) const{}
};

inline
Query operator|(const Query& lhs, const Query& rhs){
  return std::shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}







#endif
