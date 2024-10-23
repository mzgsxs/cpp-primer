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


#include"Message.h"
#include"Folder.h"

int main (int argc, char** argv){
Message m1("a message");
Message m2("another message");
Message m3("third message");
Folder f1("folder1");
Folder f2("folder2");
m1.save(f1);
m2.save(f1);
m3.save(f2);

f2 = f1;
cout << f1.print() << endl;
for (auto m: f1.get())
  cout << m->get() << endl;
cout << f2.print() << endl;
for (auto m: f2.get())
  cout << m->get() << endl;


}

