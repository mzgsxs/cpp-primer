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
using std::make_shared;

struct destination{};
struct connection{};
connection connect(destination*){return connection();};
void disconnect(connection){};

void end_connection(connection *p) { disconnect(*p); }

void f
(destination & d )
{
  connection c = connect(&d);
  shared_ptr<connection> p(&c, end_connection);

}


int main (int argc, char** argv){




}
