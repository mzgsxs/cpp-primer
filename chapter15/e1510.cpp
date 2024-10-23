/*
recall, read is defined as:

std::istream & read(std::istream & is, Sales_data & data){
...}

std::ifstream is a derived class of std::istream,
thus a &(ref) 

std::ifstream & ifs 

is converted to

std::istream & is

(std::ifstream &) -> (std::istream &)

is possible, but the reverse is not possible



*/
