
#include"Window_mgr.h"
#include<iostream>

int main(){
  Window_mgr wm;
  wm.get(0).display(std::cout);
  std::cout << std::endl;
  wm.clear(0);
  wm.get(0).display(std::cout);
  std::cout << std::endl;
}
