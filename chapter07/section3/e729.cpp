#include"Screen.h"
#include<iostream>
using std::cout;

int main (){
  Screen myScreen(5, 5, 'X'); 
  myScreen.move(4,0).set('#').display(cout); 
  cout << "\n";
  myScreen.display(cout);
  cout << "\n";
  // if move set display returns Screen instead of Screen &
  // two out puts will not be the same
}
