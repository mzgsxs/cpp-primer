#include<algorithm>

#include <numeric>


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
vector<double> vi{1,2,3,4,5.2};

while(cin >> i)
  vi.push_back(i);

cout << std::accumulate(vi.cbegin(), vi.cend(), 0);
// return type is the same as third argument
cout << endl;

}
