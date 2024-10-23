
#include<string>
#include<iostream>

class Book{
public:
  std::string name;
  size_t quantity;
  Book() = default;
  Book(std::string s, unsigned num): name(s), quantity(num) {}
  Book & operator +=(Book const & );
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
  Book b1("book", 10),b2("book", 20);
  std::cout << (b1+b2) << std::endl;
  b1 += b2;
  std::cout << b1;

}
