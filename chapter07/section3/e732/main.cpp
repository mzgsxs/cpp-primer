
#include"Screen.h"
#include"Window_mgr.h"
#include<iostream>

// by seperating header file and source file
// we hope to simplify the dependencies

int main(){
  Window_mgr wm;
  wm.get(0).display(std::cout);
  std::cout << std::endl;
  wm.clear(0);
  wm.get(0).display(std::cout);
  std::cout << std::endl;
}
