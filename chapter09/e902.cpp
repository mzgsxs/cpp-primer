#include<deque>
#include<list>


int main(){
  std::list<std::deque<int>> ldi;
  ldi.push_back(std::deque<int>{1,2,3});
}
