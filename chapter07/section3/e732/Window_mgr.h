#ifndef WINDOW_MGR_H 
#define WINDOW_MGR_H

#include<vector>

class Screen;

class Window_mgr{
public:
  Window_mgr();
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);
  Screen & get(ScreenIndex i) { return screens[i]; }

private:
  std::vector<Screen> screens;
};

#endif
