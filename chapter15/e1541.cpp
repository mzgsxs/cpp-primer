
#include"QueryNoSharedPtrs.h"
#include<iostream>
#include<fstream>

int main(int argc, char** argv){

//Query q = Query("class");
//Query q = Query("class") & Query("Query");
//Query q = Query("class") | Query("Query");
Query q = ~Query("Query");
/*
operator ~ makes a new drived class object of Query_base class
This q holds this object and it's responsible for destroying it 
*/


std::cout << q.rep() << std::endl;
auto ifs = std::ifstream("./Query.h");
TextQuery tq(ifs); 
print(std::cout, q.eval(tq));

}


