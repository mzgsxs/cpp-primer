
#include <iostream>
#include <string>

struct Sales_data { 
  std::string bookNo; // empty string
  unsigned sold = 0;
  double revenue = 0.;
};
int main() 
{
  Sales_data s1, s2;
  std::cout << s1.bookNo << std::endl;
  std::cout << s1.sold << std::endl;
  std::cout << s1.revenue << std::endl;
  return 0;
}
