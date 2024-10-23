
#include<string>
#include<iostream>
#include<sstream>

class Book{
public:
  std::string name;
  size_t quantity;
  Book() = default;
  Book(std::string s, unsigned num): name(s), quantity(num) {}
  Book & operator +=(Book const & );

  operator bool() {
    if (quantity>0) return true;
    return false;
  }
};

std::istream & operator >> (std::istream & in, Book & book){
  in >> book.name >> book.quantity;
  return in;
}

std::ostream & operator << (std::ostream & os, Book const & book){
  os << book.name << book.quantity;
  return os;
}

Book & Book::operator +=(Book const & book){
  this->quantity += book.quantity;
  return *this;
}

Book operator +(Book const & lhs, Book const & rhs){
  Book sum = lhs;
  sum+=rhs;
  return std::move(sum);
}

int main (int argc, char** argv){
Book b1, b2("book", 10); 
// no other assignment operator is necessary
}
