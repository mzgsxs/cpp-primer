
#include"Query.h"
#include<iostream>
#include<fstream>

int main(int argc, char** argv){

//Query q = Query("class") | Query("dwknjqd");
//Query q = Query("dwqnlkj") | Query("Query");
Query q = Query("dwqnlkj") | Query("qlwibfln");
std::cout << q.rep() << std::endl;
auto ifs = std::ifstream("./Query.h");
TextQuery tq(ifs); 
print(std::cout, q.eval(tq));

}

/*


*/
