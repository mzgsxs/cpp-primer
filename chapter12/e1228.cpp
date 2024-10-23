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

#include<set>
using std::set;
void
query(string const & word, vector<string> const & content)
{
  set<size_t> line_numbers;
  size_t l(0), total_occurance(0);
  for (auto const & line: content){
    auto ret = line.find(word);
    if (ret != string::npos){
      line_numbers.insert(l);
      cout << "  (line " << l << ")  ";
      cout << line << endl;
      ++total_occurance;
    }
    ++l;
  }
  cout << "element occurs "
      << total_occurance
      << " times"
      << endl;

}

void runQueries(ifstream &infile)
{ 
  vector<string> content;
  string line;
  while (getline(infile, line))
    content.push_back(line);

  while (true) {
    cout << "enter word to look for, or q to quit: ";
    string s;
    if (!(cin >> s) || s == "q") break;
    query(s, content);
  }
}


int main (int argc, char** argv){

ifstream infs(argv[1]);
runQueries(infs);

}
