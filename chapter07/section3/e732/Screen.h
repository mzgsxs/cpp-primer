#ifndef SCREEN_H 
#define SCREEN_H

#include<string>
#include<iostream>

#include"Window_mgr.h"

class Screen {
friend void Window_mgr::clear(ScreenIndex);

public:
  typedef std::string::size_type pos;
  Screen()=default;
  Screen(pos ht, pos wd): 
    height(ht), width(wd), contents(ht * wd, ' ') { }
  Screen(pos ht, pos wd, char c): 
    height(ht), width(wd), contents(ht * wd, c) { }

  char get() const { return contents[cursor]; }
  inline char get(pos, pos) const;
  inline Screen & move(pos, pos);
  inline Screen & set(char); 
  inline Screen & display(std::ostream &); 
  inline Screen const & display(std::ostream &) const; 

private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  inline void do_display(std::ostream &) const; 
};


inline
void Screen::do_display(std::ostream & os) const {
  os << contents;
}

inline 
Screen & Screen::display(std::ostream & os){
  do_display(os); 
  return *this;
} 

inline 
Screen const & Screen::display(std::ostream & os) const{
  do_display(os); 
  return *this;
} 

inline 
Screen & Screen::set(char c){
  contents[cursor] = c;
  return *this;
}

inline 
Screen & Screen::move(pos r, pos c){
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline
char Screen::get(pos r, pos c) const{
  pos row = r * width;
  return contents[row + c];
}
#endif
