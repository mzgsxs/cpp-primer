
#include<string>
using std::string;

#include<vector>
using std::vector;

#include<iostream>
#include<fstream>
#include<sstream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;

struct PersonInfo {
  // in-class initialization instead of default initialization
  string name{"null"};
  vector<string> phones{"0","0"};
};

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
}
