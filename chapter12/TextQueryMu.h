#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H 

#include<set>
#include<vector>
#include<string>
#include<fstream>
#include"QueryResult.h"
class QueryResult;
class TextQuery {
friend class QueryResult;
public:
  TextQuery(std::ifstream &);
  QueryResult query(std::string const &);

private:
  std::ifstream & infs;
  std::vector<std::string> content;
  
};

TextQuery::TextQuery
(std::ifstream & input_fs): infs(input_fs)
{
  std::string line;
  while (std::getline(infs, line))
    content.push_back(line);
}

QueryResult
TextQuery::query(std::string const & word)
{
  QueryResult qr;
  size_t l(0), total_occurance(0);
  std::set<size_t> line_numbers;
  
  for (auto const & line: content){
    auto ret = line.find(word);
    if (ret != std::string::npos){ 
      line_numbers.insert(l);
      ++total_occurance;
    }
    ++l;
  }
  qr.line_numbers = line_numbers;
  qr.total_occurance = total_occurance;
  qr.content_p = &content;
  return qr;
}

std::ostream &
print(std::ostream & os, QueryResult const & qr)
{
  os << "element occurs " 
      << qr.total_occurance 
      << " times" 
      << endl;
  for (auto & i : qr.line_numbers) {
    os << "  (line " << i << ")  "; 
    os << qr.content_p->at(i) << std::endl;
  }
  return os;
}


#endif
