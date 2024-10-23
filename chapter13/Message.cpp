#include"Message.h"
#include<iostream>

inline
void Message::addFdr(Folder &f)
{
folders.insert(&f);
}

inline
void Message::remFdr(Folder &f)
{
folders.erase(&f);
}

void Message::save(Folder &f)
{
addFdr(f); // add the given Folderto our list of Folders
f.addMsg(this); // add this Messageto f’s set of Messages
}

void Message::remove(Folder &f)
{
remFdr(f); // take the given Folderout of our list of Folders
f.remMsg(this); // remove this Messageto f’s set of Messages
}

void Message::add_to_Folders(const Message &m)
{
for (auto f : m.folders) // for each Folderthat holds m
f->addMsg(this); // add a pointer to this Messageto that Folder
}

Message::Message(const Message &m):
contents(m.contents), folders(m.folders)
{
add_to_Folders(m); // add this Messageto the Folders that point to m
}

void Message::move_to_Folders(Message *m)
{
folders = std::move(m->folders);
for (auto f : folders){ // for each Folderthat holds m
f->remMsg(m); // add a pointer to this Messageto that Folder
f->addMsg(this); // add a pointer to this Messageto that Folder
}
m->folders.clear();
}

Message::Message(Message && rm):
contents(std::move(rm.contents))
{
move_to_Folders(&rm); // add this Message to the Folders that point to m
}

Message& Message::operator=(Message &&rhs)
{
if (this != &rhs) { // direct check for self-assignment
remove_from_Folders();
contents = std::move(rhs.contents); // move assignment
move_to_Folders(&rhs); // reset the Folders to point to this Message
}
return *this;
}

void Message::remove_from_Folders()
{
for (auto f : folders){ // for each pointer in folders
f->remMsg(this);// remove this Messagefrom that Folder
}
folders.clear(); // no Folderpoints to this Message
}

Message::~Message()
{
remove_from_Folders();
}

Message& Message::operator=(const Message &rhs)
{
remove_from_Folders(); // update existing Folders
contents = rhs.contents; // copy message contents from rhs
folders = rhs.folders; // copy Folderpointers from rhs
add_to_Folders(rhs); // add this Messageto those Folders
return *this;
}

void swap(Message &lhs, Message &rhs)
{
using std::swap; // not strictly needed in this case, but good habit
for (auto f: lhs.folders)
f->remMsg(&lhs);
for (auto f: rhs.folders)
f->remMsg(&rhs);
swap(lhs.folders, rhs.folders); // uses swap(set&,set&)
swap(lhs.contents, rhs.contents); // swap(string&,string&)
for (auto f: lhs.folders)
f->addMsg(&lhs);
for (auto f: rhs.folders)
f->addMsg(&rhs);
}


