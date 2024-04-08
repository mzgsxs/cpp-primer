#include <iostream>

#include <string>
using std::string;

#include <vector>
using std::vector;

using std::cin;
using std::cout;
using std::endl;


int main()
{
  char ca[] = {'h', 'e', 'l', 'l', 'o'};
  char * cp0 = ca;
  char * cp1 = ca+1;

  // becuase it's undefined! 
  cout << ca+ca << endl;

  return 0;
}


