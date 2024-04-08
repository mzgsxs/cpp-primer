#include <iostream>
int main()
{
  int sum = 0, v;
  //while(std::cin >> v){
  for (;std::cin >> v;){
    sum += v;
  }
  std::cout << "Sum:" << sum << std::endl;
  return 0;
}
