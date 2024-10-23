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

int main(){
  string s{"ab2c3d7R4E6"};
  string numbers{"0123456789"}; 

  string::size_type occur= s.find_first_of(numbers);
  while (occur != string::npos){
    cout << s[occur] << endl;
    occur = s.find_first_of(numbers, occur+1);
  }

  occur= s.find_first_not_of(numbers);
  while (occur != string::npos){
    cout << s[occur] << endl;
    occur = s.find_first_not_of(numbers, occur+1);
  }
  cout << s << endl;

}
