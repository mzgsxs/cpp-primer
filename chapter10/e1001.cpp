#include<algorithm>

#include<vector>
using std::vector;


#include<iostream>
using std::cin;
using std::cout;
using std::endl;


int main(){
int i;
vector<int> vi{1,2,3,4,5,5};

while(cin >> i)
  vi.push_back(i);

cout << std::count(vi.cbegin(), vi.cend(), 5);
cout << endl;

}
