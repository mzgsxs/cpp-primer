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
  int grade = 70;
  string finalgrade;
 // finalgrade = (grade > 90) ? "high pass"
 //                : (grade < 60) ? "fail" 
 //                  : (grade > 75 ) ? "low pass" : "pass";  

 // cout << finalgrade << endl; // ok
   
  if (grade < 60) finalgrade = "fail";
  if (grade >= 60) finalgrade = "pass";
  if (grade >= 75) finalgrade = "low pass";
  if (grade >= 90) finalgrade = "high pass";
  cout << finalgrade << endl; // ok

  return 0;
}


