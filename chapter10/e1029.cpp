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
#include<fstream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;


#include<iterator>
using std::istream_iterator;

#include"my_utils.h"

int main(){

ifstream in("./book_sales");
istream_iterator<string> sifs_it(in);
istream_iterator<string> eof;
vector<string> vs;

while (sifs_it != eof){
  vs.push_back(*sifs_it++);
}

//print<vector<string>>(vs.begin(), vs.end());
print<vector<string>>(vs);
cout << endl;

}
