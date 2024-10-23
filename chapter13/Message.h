#ifndef MESSAGE_H
#define MESSAGE_H 
#include<string>
#include<set>
#include"Folder.h"

class Folder;
class Message {
friend class Folder;
friend void swap(Folder & lhs, Folder & rhs);
friend void swap(Message &lhs, Message &rhs);

public:
  explicit Message(const std::string &str = ""):
  contents(str) { }
  Message(const Message&); // copy constructor
  Message(Message &&); // move constructor
  Message& operator=(const Message&); // copy assignment
  Message& operator=(Message &&); // move assignment
  ~Message(); // destructor
  void save(Folder&);
  void remove(Folder&);
  std::string get(){return contents;}
private:
  std::string contents; // actual message text
  std::set<Folder*> folders; // Folders that have this Message
  void addFdr(Folder &);
  void remFdr(Folder &);
  void add_to_Folders(const Message&);
  void remove_from_Folders();
};


#endif
