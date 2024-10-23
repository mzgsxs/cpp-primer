#include"Folder.h"

inline 
void swap(Folder & lhs, Folder & rhs){
  using std::swap;
  for (auto m: lhs.messages){
  m->folders.erase(&lhs);
  m->folders.insert(&rhs);
  }
  for (auto m: rhs.messages){
  m->folders.erase(&rhs);
  m->folders.insert(&lhs);
  }
  swap(lhs.name, rhs.name);
  swap(lhs.messages, rhs.messages);
}

void Folder::addMsg(Message * m){
messages.insert(m);
}

void Folder::remMsg(Message * m){
messages.erase(m);
}

Folder::Folder(Folder const & f): name(f.name){
for (auto m: f.messages) m->save(*this);
}

Folder::~Folder(){
auto messages_copy = messages;
for (auto m: messages_copy){ 
  m->remove(*this);
}
}

Folder & Folder::operator = (Folder f){
  swap(*this, f);
  return *this;
}


