#include"Window_mgr.h"
#include"Screen.h"
#include<string>

// this depends on the declaration of the class Screen
Window_mgr::Window_mgr(){
  screens.push_back(Screen(9, 13, 'x'));
}

void Window_mgr::clear(ScreenIndex i){
  Screen & sir = screens[i];
  sir.contents = std::string(sir.width*sir.height, ' ');
}


