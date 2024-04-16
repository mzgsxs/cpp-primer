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
  int grade = 100;
  const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
  string lettergrade;

  if (grade < 60)
    lettergrade = scores[0];
  else {
    lettergrade = scores[(grade - 50)/10]; // fetch the letter grade if (grade != 100) // add plus or minus only if not already an A++
    if (grade != 100) 
      lettergrade += (grade % 10 > 7)? '+': (grade % 10 < 3)? '-': ' ';
  }
  cout << lettergrade;
 
  cout << endl;
  return 0;
}


