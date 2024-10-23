#include<string>
using std::string;
#include<iostream>
class Query{
public:
Query(string s){;}



Query operator~ (){
  std::cout << "~" << std::endl;
  return Query("");
}


};

Query operator& (Query && lhs, Query && rhs){
  std::cout << "&" << std::endl;
  return Query("");
}

Query operator| (Query && lhs, Query && rhs){
  std::cout << "|" << std::endl;
  return Query("");
}

int main(int argc, char** argv){
string s1,s2,s3,s4;
// evaluates based on precedence table
Query(s1) | Query(s2) & ~ Query(s3);// Or
  std::cout << "-------------------------" << std::endl;
Query(s1) | (Query(s2) & ~ Query(s3));// Or
  std::cout << "-------------------------" << std::endl;
(Query(s1) & (Query(s2)) | (Query(s3) & Query(s4)));// Or
  std::cout << "-------------------------" << std::endl;

}
