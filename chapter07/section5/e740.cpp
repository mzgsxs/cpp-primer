#include<string>
#include<iostream>

class Book{
public:
  std::string name;
  unsigned quantity;
  Book() = default;
  Book(std::string s, unsigned num): name(s), quantity(num) {}
};

class Data{
public:
  std::string content;
  unsigned long length;

  Data() = default;
  Data(std::string s): content(s), length(s.size()) {}
};

int main(){
  Book book;
  std:: cout << book.name << std::endl;
  std:: cout << book.quantity << std::endl;

  Book book2("book name", 100);
  std:: cout << book2.name << std::endl;
  std:: cout << book2.quantity << std::endl;

  Data data("this is the content");
  std:: cout << data.content << std::endl;
  std:: cout << data.length << std::endl;

}

