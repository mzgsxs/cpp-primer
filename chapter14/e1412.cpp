
#include<string>
#include<sstream>
#include<iostream>


class Book{
public:
  std::string name;
  unsigned quantity;
  Book() = default;
  Book(std::string s, unsigned num): name(s), quantity(num) {}
};

std::istream & operator >> (std::istream & in, Book & book){
  in >> book.name >> book.quantity;
  return in;
}

int main (int argc, char** argv){

Book book;
std::stringstream ss;
ss << "bookname 10";
ss >> book;
std::cout << book.name;
std::cout << book.quantity;
}
