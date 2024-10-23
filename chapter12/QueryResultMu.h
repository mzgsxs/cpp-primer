#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H 

#include<set>
#include<vector>
#include<string>

struct QueryResult{
  size_t total_occurance;
  std::set<size_t> line_numbers;
  std::vector<std::string>* content_p;
};



#endif
