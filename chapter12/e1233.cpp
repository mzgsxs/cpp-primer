#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;


#include<iostream>
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

#include<fstream>
using std::ifstream;
using std::ofstream;

#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;

#include<memory>
using std::shared_ptr;
using std::unique_ptr;
using std::make_shared;

#include"TextQuery.h"
void runQueries(ifstream &infile)
{
  TextQuery tq(infile); 
  while (true) {
    cout << "enter word to look for, or q to quit: ";
    string s;
    if (!(cin >> s) || s == "q") break;
    //print(cout, tq.query(s)) << endl;
    auto ret = tq.query(s);
    cout << "first:" << *ret.begin() << endl;
    cout << "last:" << *ret.end() << endl;
    auto & file = ret.get_file();
    for(auto& w:file){
      cout << w << endl;
    }
  }
}


int main (int argc, char** argv){

ifstream infs(argv[1]);
runQueries(infs);

}
