#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H 

#include<set>
#include<string>

#include"StrVec.h"
#include"TextQuery.h"
class QueryResult{
friend std::ostream& print(std::ostream&, const QueryResult&);
public:
  QueryResult(
    std::string s,
    std::shared_ptr<std::set<TextQuery::line_no>> p,
    std::shared_ptr<StrVec> f
  ): sought(s), lines(p), file(f) {}

private:
  std::string sought;
  std::shared_ptr<std::set<TextQuery::line_no>> lines;
  std::shared_ptr<StrVec> file;
};



#endif
