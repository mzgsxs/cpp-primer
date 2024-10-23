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

//...
auto wc = count_if(words.begin(), words.end(),
  [sz](const string &a){ return a.size() >= 6; } 
  );
//...

cout << endl;

}
