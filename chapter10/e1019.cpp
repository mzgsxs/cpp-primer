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

void biggies
(vector<string> &words, vector<string>::size_type sz)
{
  elimDups(words); 

  for_each(words.begin(), words.end(),
  [](const string &s){cout << s << " ";});
  cout << endl;


  stable_sort(words.begin(), words.end(),
  [](const string &a, const string &b)
  { return a.size() < b.size();});

  auto wc = stable_partition(words.begin(), words.end(),
  [&sz](const string &a)
  { return a.size() < sz; });

  auto count = words.end() - wc;
  cout << count << " " << make_plural(count, "word", "s")
  << " of length " << sz << " or longer" << endl;

  for_each(wc, words.end(),
  [](const string &s){cout << s << " ";});
  cout << endl;

}

int main(){

vector<string> vs{"sf","cqwdqw","qfwq","fqwfqw","dqw"};
biggies(vs, 5);


}
