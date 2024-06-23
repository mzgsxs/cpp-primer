#ifndef WINDOW_MGR_H 
#define WINDOW_MGR_H

#include<string>
#include<vector>

class Screen;
// forward declearation of class Screen

class Window_mgr{
public:
  Window_mgr();
  using ScreenIndex = std::vector<Screen>::size_type;
  inline void clear(ScreenIndex);
  Screen & get(ScreenIndex i) { return screens[i]; }

private:
  std::vector<Screen> screens;
};


#include"Screen.h"
// this depends on the definition of the class Screen
Window_mgr::Window_mgr(){
  screens.push_back(Screen(9, 13, 'x'));
}

inline
void Window_mgr::clear(ScreenIndex i){
  Screen & sir = screens[i];
  sir.contents = std::string(sir.width*sir.height, ' ');
}

#endif
