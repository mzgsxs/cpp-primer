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

int main (int argc, char** argv){

  char const * str1 = "Hello, ";
  char const * str2 = "World!";

  // Calculate the length of the concatenated string
  size_t length = strlen(str1) + strlen(str2) + 1; // +1 for the null terminator

  // Dynamically allocate a char array
  char * result = new char[length];
  strcpy(result, str1);
  strcat(result, str2);
  std::cout << "Concatenated string: " << result << std::endl;
  delete[]result;


  std::string sstr1 = "Hello, ";
  std::string sstr2 = "World!";

  // Concatenate using the + operator
  std::string sresult = sstr1 + sstr2;

  // Output the result
  std::cout << "Concatenated string: " << sresult << std::endl;

  return 0;

}
