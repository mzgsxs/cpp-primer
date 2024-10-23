



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


void read
(vector<int> * p_vi)
{
  int i;
  while (cin >> i)
    p_vi->push_back(i);
}

void print
(vector<int> const * p_vi)
{
  for (auto v : *p_vi) 
    cout << v << ",";

  cout << endl;
}

int main (int argc, char** argv){

  shared_ptr<vector<int>> sp_vi = make_shared<vector<int>>();
  read(sp_vi.get());
  print(sp_vi.get());

}
