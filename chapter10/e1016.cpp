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

void biggies
(vector<string> &words, vector<string>::size_type sz)
{
  elimDups(words); 

  stable_sort(words.begin(), words.end(),
  [](const string &a, const string &b)
  { return a.size() < b.size();});

  auto wc = find_if(words.begin(), words.end(),
  [&sz](const string &a)
  { return a.size() >= sz; });

  auto count = words.end() - wc;
  cout << count << " " << make_plural(count, "word", "s")
  << " of length " << sz << " or longer" << endl;

  for_each(wc, words.end(),
  [](const string &s){cout << s << " ";});
  cout << endl;

}

int main(){

}
