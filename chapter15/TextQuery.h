#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H 

#include<map>
#include<set>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>

#include<memory>

class QueryResult;
class TextQuery {
friend class QueryResult;
public:
  using line_no = std::vector<std::string>::size_type;
  // to make sure it can capture all lines
  // try to use size_type of the conatainer as much as possible
  TextQuery(std::ifstream &);
  QueryResult query(std::string const &) const;// to make it also work for const instance

private:
  std::shared_ptr<std::vector<std::string>> sp_content;
  std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
  
};

TextQuery::TextQuery
(std::ifstream & input_fs): sp_content(new std::vector<std::string>)
{
  std::string line;
  while (std::getline(input_fs, line)){
    sp_content->push_back(line);
    line_no n = sp_content->size() - 1;
    std::istringstream ssline(line);
    std::string word;
    while (ssline >> word) {
      auto & lines = wm[word];
      if (!lines)
        lines.reset(new std::set<line_no>);
      lines->insert(n);
    }
  }
}


#include"QueryResult.h"
QueryResult
TextQuery::query(std::string const & word) const
{
  static std::shared_ptr<std::set<line_no>> no_data(new std::set<line_no>);
  std::shared_ptr<std::set<line_no>> & sp_line_numbers = no_data;
  auto ret = wm.find(word);
  if (ret != wm.end()) sp_line_numbers = ret->second;
  //else sp_line_numbers = no_data;
  return QueryResult(word, sp_line_numbers, sp_content);
}

std::ostream &
print(std::ostream & os, QueryResult const & qr)
{
  os << qr.sought << " occurs " 
      << qr.lines->size() 
      << " time(s)"
      << std::endl;
  for (auto & i : *qr.lines) {
    os << "  (line " << i << ")  "; 
    os << qr.file->at(i) << std::endl;
  }
  return os;
}


#endif
