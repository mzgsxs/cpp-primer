#include <iostream>
#include <string>
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  //string line;
  //while( getline(cin, line)) 
  //  cout << "Input:" << line << endl;

  string word;
  // each space will enter the while loop do statement once
  while( cin >> word) 
    cout << "Input:" << word << endl;

  return 0;
}
