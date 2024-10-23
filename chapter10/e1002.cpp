#include<algorithm>



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


int main(){
int i;
list<int> vi{1,2,3,4,5,5};

while(cin >> i)
  vi.push_back(i);

cout << std::count(vi.cbegin(), vi.cend(), 5);
cout << endl;

}
