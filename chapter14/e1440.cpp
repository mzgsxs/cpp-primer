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

string make_plural(size_t ctr, const string &word,
const string &ending)
{
return (ctr > 1) ? word + ending : word;
}

void elimDups(vector<string> &words)
{
sort(words.begin(), words.end());
auto end_unique = unique(words.begin(), words.end());
words.erase(end_unique, words.end());
}


struct compare{
  bool operator ()(const string &a, const string &b){
    return a.size() < b.size();
  }
};

struct greater{
  greater(vector<string>::size_type sz): lower_bound(sz){}
  bool operator ()(string const & a)
    { return a.size() >= lower_bound; }
  vector<string>::size_type lower_bound;
};

struct print{
  void operator()(string const & s){
    cout << s << " ";
  }
};

void biggies
(vector<string> &words, vector<string>::size_type sz)
{
  elimDups(words); 

  stable_sort(words.begin(), words.end(), compare());

  auto wc = find_if(words.begin(), words.end(), greater(sz));

  auto count = words.end() - wc;
  cout << count << " " << make_plural(count, "word", "s")
  << " of length " << sz << " or longer" << endl;

  for_each(wc, words.end(), print());
  cout << endl;

}

int main(){
vector<string> vs = {"word", "words", "askdlnlad"};
biggies(vs, 5);
}
