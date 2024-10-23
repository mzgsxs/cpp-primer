#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H 

#include<set>
#include<vector>
#include<string>

#include"TextQuery.h"
class QueryResult{
friend std::ostream& print(std::ostream&, const QueryResult&);

public:
  QueryResult(
    std::string s,
    std::shared_ptr<std::set<TextQuery::line_no>> p,
    std::shared_ptr<std::vector<std::string>> f
  ): sought(s), lines(p), file(f) {}
  std::vector<std::string> const & get_file() const {
    return *file;
  }
  auto begin(){
    return lines->begin();
  }
  auto end(){
    return lines->end();
  }

private:
  std::string sought;
  std::shared_ptr<std::set<TextQuery::line_no>> lines;
  std::shared_ptr<std::vector<std::string>> file;

};



#endif
