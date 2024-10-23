/*

*/

#include"QueryNoInterface.h"
#include<iostream>
int main(int argc, char** argv){
Query q = ~Query("fiery");
/*
although friendship can not be inherited
from Query's point-of-view it's using Query_base's methods
so as long as Query_base is considering Query as a freind
Query can use Query_base's eval() and rep() methods evenif 
they are actually a dynamic binding version of the 
derived class's method
*/
//Query q = Query("fiery") & Query("bird") | Query("wind");
std::cout << q.rep() << std::endl;
}
