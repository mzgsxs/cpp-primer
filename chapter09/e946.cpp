#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;

#include<iostream>
using std::cin;
using std::cout;
using std::endl;


template<class T>
void print(T container)
{
  auto itr = container.begin();
  auto end = container.end();
  while(itr != end){
    cout << (*itr++) << " | ";
  }
  cout << endl;
}


string foo
(string const & name, string const & prefix, string const & suffix)
{
  string full_name(name);
  full_name.insert(0, prefix);
  full_name.insert(prefix.length() + name.length(), " " + suffix);
  return full_name;
}

int main(){

  cout << foo("Mu", "Mr.", "Jr") << endl;

}
