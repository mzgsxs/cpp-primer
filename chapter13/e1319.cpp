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

struct Employee {
  static size_t count;

  Employee()=default;
  Employee(string const & n): name(n){};
  // maybe the uid should be copied as well
  Employee(Employee const & e): name(e.name){};
  Employee & operator=(Employee const & e)
    { name= e.name; }

  string name{""};
  size_t uid{count++};
};

size_t Employee::count = 0;




int main (int argc, char** argv){
  cout << Employee::count << endl;
  Employee e1, e2;
  cout << e1.uid << " " << e2.uid << endl;



}

