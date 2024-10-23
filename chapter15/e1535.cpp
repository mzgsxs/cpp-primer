/*
objects created by the expression 
Query q = Query("fiery") & Query("bird") | Query("wind");

(a) List the constructors executed in processing that expression.

-Query(std::string const &) three times for each 
-WordQuery(std::string const & s);


(b) List the calls to rep that are made from cout << q.
operator<<(std::ostream &os, const Query &query)
std::string rep() in Query
std::string rep() in OrQuery then WordQuery or NotQuery etc

(c) List the calls to eval made from q.eval().




*/

#include"Query.h"
#include<iostream>
int main(int argc, char** argv){
Query q = Query("fiery") & Query("bird") | Query("wind");
std::cout << q.rep() << std::endl;
}
