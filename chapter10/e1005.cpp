#include<algorithm>

using std::begin;
using std::end;

#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;



#include<iostream>
using std::cin;
using std::cout;
using std::endl;


int main(){

char roster1 [] = "c style string\0";
char roster2 [] = "c style string\0";
//char roster2 [] = "c style string too\0";

cout << std::equal(begin(roster1), end(roster1), begin(roster2));
cout << endl;

}
