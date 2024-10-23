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
Folder f1("folder1");
Folder f2("folder2");
m1.save(f1);
m1.save(f2);
m2.save(f1);
cout << "ok" << endl;
/* if  Messageused the synthesized versions of the
   copy-control members
   then folder class can not be informed when:
   1. a message is copy-init or copy assigned
   2. a message is destroied
*/
}


