
#include<string>
using std::string;

#include<vector>
using std::vector;

#include<iostream>
#include<fstream>
#include<sstream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::ostringstream;

struct PersonInfo {
  // in-class initialization instead of default initialization
  string name{"null"};
  vector<string> phones{};
};


bool valid
( string const & num )
{
  return true;
}

string const & format 
( string const & num )
{
  return num;
}


int main(int argc, char **argv){
  ifstream ifs(argv[1]);

  string line, word; // will hold a line and word from input, respectively
  vector<PersonInfo> people; // will hold all the records from the input
  // read the input a line at a time until cinhits end-of-file (or another error)
  istringstream record; // bind recordto the linewe just read
  while (getline(ifs, line)) {
    record.str(line);
    cout << "new person" << endl;
    PersonInfo info; // create an object to hold this record’s data
    record >> info.name; // read the name
    while (record >> word) // read the phone numbers
      info.phones.push_back(word); // and store them
    people.push_back(info); // append this record to people
    record.clear();
  }
  // since we do not want to copy or modify the content
  for (auto const & entry : people) { // for each entry in people
    ostringstream formatted, badNums; // objects created on each loop
    for (auto const & nums : entry.phones) { // for each number
      if (!valid(nums)) {
        badNums << " " << nums; // stringin badNums
      } else
        // ‘‘writes’’ to formatted’s string
        formatted << " " << format(nums);
      }
      if (badNums.str().empty()) // there were no bad numbers
        std::cout << entry.name << " " // print the name
          << formatted.str() << endl; // and reformatted numbers
      else // otherwise, print the name and bad numbers
        cerr << "input error: " << entry.name
          << " invalid number(s) " << badNums.str() << endl;
  }
}
