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


bool isShorter(const string &s1, const string &s2)
{
return s1.size() < s2.size();
}



void elimDups(vector<string> &words)
{
  std::stable_sort(words.begin(), words.end(), isShorter);
  auto end_unique = std::unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word,
const string &ending)
{
return (ctr > 1) ? word + ending : word;
}



bool check_size(const string &s, string::size_type sz)
{
return s.size() >= sz;
}



#include<functional>
using namespace std::placeholders;

void biggies
(vector<string> &words, vector<string>::size_type sz)
{
  elimDups(words); 

  stable_sort(words.begin(), words.end(),
  [](const string &a, const string &b)
  { return a.size() < b.size();});

  auto wc = find_if(words.begin(), words.end(), bind(check_size, _1, sz));

  auto count = words.end() - wc;
  cout << count << " " << make_plural(count, "word", "s")
  << " of length " << sz << " or longer" << endl;

  for_each(wc, words.end(),
  [](const string &s){cout << s << " ";});
  cout << endl;

}

int main(){

vector<string> vs{"sf","cqwdqwdf","qfwq","fqwfqw","dqw"};
biggies(vs, 5);


}
