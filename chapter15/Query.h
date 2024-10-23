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
  WordQuery(std::string const & s): query_word(s) {}
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
  NotQuery(Query const & q): query(q) {}
  QueryResult eval(const TextQuery&) const;
  std::string rep() const {return "~("+query.rep()+")";}
  Query query;
};

inline
Query operator~(Query const & operand){
  return std::shared_ptr<Query_base>(new NotQuery(operand));
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
  QueryResult eval(TextQuery const &) const; 
};

inline
Query operator&(const Query& lhs, const Query& rhs){
  return std::shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery: public BinaryQuery{
friend Query operator|(const Query&, const Query&);
  OrQuery(Query const & l, Query const & r):
    BinaryQuery(l, r, "|") {}
  QueryResult eval(TextQuery const &) const;
};

inline
Query operator|(const Query& lhs, const Query& rhs){
  return std::shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

#include<algorithm>
#include<iterator>
QueryResult
AndQuery::eval(TextQuery const & tq) const{
  QueryResult lret = lhs.eval(tq), rret = rhs.eval(tq);
  auto result_lines = std::make_shared<std::set<TextQuery::line_no>>(); 
  std::set_intersection(lret.begin(), lret.end(),
                        rret.begin(), rret.end(),
                        std::inserter(*result_lines, result_lines->end()));
  return QueryResult(rep(), result_lines, lret.get_file()); 
} 

QueryResult
OrQuery::eval(TextQuery const & tq) const{
  QueryResult lret = lhs.eval(tq), rret = rhs.eval(tq);
  auto result_lines = std::make_shared<std::set<TextQuery::line_no>>(); 
  std::set_union(lret.begin(), lret.end(),
                        rret.begin(), rret.end(),
                        std::inserter(*result_lines, result_lines->end()));
  return QueryResult(rep(), result_lines, lret.get_file()); 
}


QueryResult
NotQuery::eval(const TextQuery& tq) const {
  auto ret = query.eval(tq);
  auto result_lines = std::make_shared<std::set<TextQuery::line_no>>();
  std::set<TextQuery::line_no> all_lines;
  auto file_sp = ret.get_file();
  TextQuery::line_no size = file_sp->size();
  for (TextQuery::line_no i = 0; i < size; ++i){
    all_lines.insert(i);
  }
  std::set_difference(all_lines.begin(), all_lines.end(),
                      ret.begin(), ret.end(),
                      std::inserter(*result_lines, result_lines->end()));
  return QueryResult(rep(), result_lines, file_sp); 
}


#endif
