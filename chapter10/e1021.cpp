#include<algorithm>

using std::begin;
using std::end;

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

int i{2};

auto foo = [&i]()->bool{
return (i==0)? true : !(i--);
};

cout << i;
cout << (foo()?"true":"false");
cout << endl;

cout << i;
cout << (foo()?"true":"false");
cout << endl;

cout << i;
cout << (foo()?"true":"false");
cout << endl;

cout << i;
cout << (foo()?"true":"false");
cout << endl;


}
