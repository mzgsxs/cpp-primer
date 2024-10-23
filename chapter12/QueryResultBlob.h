#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H 

#include<set>
#include<vector>
#include<string>

#include"TextQuery.h"
#include"StrBlob.h"

class QueryResult{
friend std::ostream& print(std::ostream&, const QueryResult&);
public:
  QueryResult(
    std::string s,
    std::shared_ptr<std::set<TextQuery::line_no>> p,
    StrBlob f
  ): sought(s), lines(p), file(f) {}
  std::set<TextQuery::line_no>::iterator begin
    () {return lines->begin();}
  std::set<TextQuery::line_no>::iterator end
    () {return lines->end();}
  StrBlob const & get_file() const {return file;}

private:
  std::string sought;
  std::shared_ptr<std::set<TextQuery::line_no>> lines;
  StrBlob file;
};



#endif
