#ifndef FOLDER_H
#define FOLDER_H 
#include<string>
#include<set>
#include"Message.h"
#include<iostream>

class Message;
class Folder {
friend void swap(Folder & lhs, Folder & rhs);

public:
Folder()=default;
Folder(std::string const & s): name(s){}

void addMsg(Message *);
void remMsg(Message *);
Folder(Folder const &);
~Folder();
Folder & operator = (Folder);

std::string const & print(){return name;}
std::set<Message*> const & get(){return messages;}

private:
std::string name;
std::set<Message*> messages;

};

#endif
