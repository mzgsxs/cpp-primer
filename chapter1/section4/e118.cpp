#include <iostream>
int main()
{
  int cv, v, c=1;
  if (std::cin >> cv){
    while (std::cin >> v){
      if (v==cv){
        c++;
      } else {
        std::cout << cv << " occurs " << c << " times " << std::endl;
        cv = v;
        c = 1;
      }
    }
    std::cout << cv << " occurs " << c << " times " << std::endl;
  }
  return 0;
}
// prints out frequency  
