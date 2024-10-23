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


#include<map>
#include<set>
using std::map;
using std::set;


#include<iostream>
using std::istream;
using std::cin;
using std::cout;
using std::endl;

#include<fstream>
using std::ifstream;

#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;



int main(){

  map<string, vector<string>> family_index = 
    {
      {"Mu", {"Paul", "Daisy"}},
      {"Zhang", {"Jack", "Mike"}}
    };

  family_index["Ge"];
  family_index["Mu"].push_back("Authur");

  cout << family_index.size() << endl;
}
