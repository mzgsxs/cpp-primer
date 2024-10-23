#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;


#include<iostream>
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

#include<fstream>
using std::ifstream;
using std::ofstream;

#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;

#include<memory>
using std::shared_ptr;
using std::unique_ptr;
using std::make_shared;

int main (int argc, char** argv){

  size_t bufferSize = 10;  // Initial buffer size
  char* buffer = new char[bufferSize];  // Dynamically allocate buffer
  std::cout << "Enter a string: ";
  size_t currentPosition = 0;
  char ch;

  while (std::cin.get(ch)) {
    // If we hit the end of the line, stop reading
    if (ch == '\n') break;
    // Check if buffer needs resizing
    if (currentPosition == bufferSize - 1) {
      cout << "expand buffer" << endl;
      bufferSize *= 2;  // Double the buffer size
      char* newBuffer = new char[bufferSize];
      std::strncpy(newBuffer, buffer, currentPosition);  // Copy old buffer content to new buffer
      delete[] buffer;  // Free the old buffer
      buffer = newBuffer;  // Point to the new buffer
    }
    buffer[currentPosition++] = ch;  // Add character to buffer
  }

  buffer[currentPosition] = '\0';  // Null-terminate the string
  std::cout << "You entered: " << buffer << std::endl;
  delete[] buffer;  // Free dynamically allocated memory

  return 0;

}
