#include"Screen.h"

int main (){
  Screen s1(480, 260), s2(720, 360);
  s1 = s2;
  // ok, since it does not allocate resources outside of the class
}
