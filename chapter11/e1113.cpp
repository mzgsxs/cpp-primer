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

string s;
int i;

vector<pair<string,int>> vp;
while(cin >> s >> i){
  //pair<string, int> p{s, i};
  //vp.push_back(p);
  vp.push_back(pair<string, int>(s,i));
}
cout << vp.size() << endl;

//auto p3 = std::make_pair("ss", 1);

}
