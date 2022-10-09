#include <iostream>
int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  int v = (v1<v2)? v1:v2;
  int v_max = (v1>v2)? v1:v2;
  while(v<=v_max){
    std::cout << v << " ";
    ++v;
  }
  std::cout << std::endl;
  return 0;
}
