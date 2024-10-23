



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
using std::make_shared;


vector<int> * make_vi ()
{
  return new vector<int>;
}

void read
(vector<int> * p_vi)
{
  int i;
  while (cin >> i)
    p_vi->push_back(i);
}

void print
(vector<int> * p_vi)
{
  for (auto v : *p_vi) 
    cout << v << ",";

  cout << endl;
}

int main (int argc, char** argv){

  auto p_vi = make_vi();
  read(p_vi);
  print(p_vi);
  delete p_vi;
}
