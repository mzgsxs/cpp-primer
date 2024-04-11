#include <iostream>

#include <string>
#include <cstring>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;

using std::begin;
using std::end;

int main()
{
  vector<int> vi(10,1);

  auto pb = vi.begin();
  while (pb != vi.end() && *pb >= 0) 
    cout << *++pb << endl; // evaluated after advance pb, 
    //value of the vi.end() pointer
    //cout << *pb++ << endl;
    
  return 0;
}


