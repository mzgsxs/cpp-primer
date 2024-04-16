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
  vector<string> vw;
  string w;

  while (cin >> w && w != "\n")
    vw.push_back(w);

  for (string& w: vw)
    cout << w << endl;

  string candidate(vw[0]);
  unsigned candidate_repeat(0);
  unsigned current_repeat(0);
  auto cursor = vw.begin();

  while (cursor != vw.end()) {
    if (*cursor == *(cursor+1)) {
      current_repeat += 1;
    } else {
    ;
    }
    if (current_repeat > candidate_repeat) {
      candidate = *cursor;
      candidate_repeat = current_repeat;
    }
    ++cursor;
  }

  if ( candidate_repeat > 0 ) { 
    cout 
      << candidate << " is the most repeated word, repeated " 
      << candidate_repeat << " times." 
      << 
    endl;
    return 0;
  } else { 
    std::cout << "no repeated word" << std::endl;
    return -1;
  }
}
