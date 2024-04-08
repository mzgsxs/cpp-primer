#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string s, cs, ws;
  while (cin >> s) {
    if (s == "end") break;
    cs += s;
    ws = (ws.empty())?s:(ws + " " + s);
  }
  cout << cs << endl;
  cout << ws << endl;

  return 0;
}
