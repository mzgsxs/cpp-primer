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


#include<utility>
using std::pair;

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

  map<string, vector<pair<string,string>>> family_index = 
    {
      {"Mu", {{"Paul","1993/03/13"}, {"Daisy","1994/10/02"}}},
      {"Zhang", {{"Jack", "1993/11/16"}}}
    };

  //family_index["Ge"];
  //family_index["Mu"].push_back("Authur");

  cout << family_index.size() << endl;
}
