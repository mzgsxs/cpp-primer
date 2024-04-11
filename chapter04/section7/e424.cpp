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
  finalgrade = (grade > 90) ? "high pass"
                 : (grade < 60) ? "fail" 
                   : (grade > 75 ) ? "low pass" : "pass";  
  // if L associative, evaluates L->R, inner condition evaluated first
  //finalgrade = ( (grade > 90) ? "high pass"
  //                 : (grade < 60) ) ? "fail" 
  //                 : ...  
  // (<) have higher precedence, thus evaluted first. 
  // Then the first (? :) is evaluated, which is 
  // (grade > 90) ? "high pass" : (true or false)  

  // 20 - 15 - 3 L-associative => ((20-15)-3)

  cout << finalgrade << endl; // ok

  return 0;
}


