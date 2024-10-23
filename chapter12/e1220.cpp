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

#include"StrBlob.h"
#include"StrBlobPtr.h"

int main (int argc, char** argv){

ifstream infs(argv[1]);
string line;
StrBlob sb;

while (getline(infs, line)){
  sb.push_back(line);
}

for (auto & p : sb){
  cout << p << endl;
}

infs.close();

}
