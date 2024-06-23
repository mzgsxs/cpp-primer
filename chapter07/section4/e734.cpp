
#include"Screen.h"
#include<iostream>

int main(){
  Screen s(10,10,'x');
  std::cout << s.size() << std::endl;
  // if typedef is on the last line
  // then it's undefined before ahead
}
