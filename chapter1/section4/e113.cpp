#include <iostream>
int main()
{
  int sum = 0;
  for(int i=50; i<=100; ++i){
    sum += i;
  }
  std::cout << "Sum:" << sum << std::endl;

  int sum2 = 0;
  for(int i=100; i>=50; --i){
    sum2 += i;
  }
  std::cout << "Sum:" << sum2 << std::endl;

  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  int v_min = (v1<v2)? v1:v2;
  int v_max = (v1>v2)? v1:v2;
  for(int v=v_min; v<=v_max; v++){
    std::cout << v << " ";
  }
  std::cout << std::endl;

  return 0;
}
