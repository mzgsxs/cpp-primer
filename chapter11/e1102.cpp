#include<algorithm>

using std::begin;
using std::end;

#include<vector>
#include<deque>
#include<list>
#include<string>

using std::vector;
using std::deque;
using std::list;
using std::string;


#include<map>
#include<set>

#include<iostream>
using std::cin;
using std::cout;
using std::endl;


#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;


#include"my_utils.h"


int main(){

/*
Each of these STL containers (`list`, `vector`, `deque`, `map`, and `set`) has its own strengths and ideal use cases based on the operations you need to perform and the characteristics of the data you are working with. Below are examples of when each might be most useful:

### 1. **`list`**
   - **Description:** A doubly-linked list that allows fast insertions and deletions from anywhere in the sequence, but has slower access time compared to arrays or vectors.
   - **Use Case:** Use a `list` when you need to frequently insert or delete elements in the middle of the container and don't need fast random access.
   - **Example:**
     - **Task Scheduler:** If you're implementing a task scheduler where tasks can be added, removed, or moved around frequently, a `list` is ideal because of its efficient insertion and deletion.

### 2. **`vector`**
   - **Description:** A dynamic array that allows fast random access and is efficient for appending elements at the end. However, inserting or deleting elements (except at the end) is slower.
   - **Use Case:** Use a `vector` when you need fast random access to elements and don't need to frequently insert or delete elements in the middle.
   - **Example:**
     - **Image Processing:** If you're working with pixel data where you need to access and modify specific pixels, a `vector` is ideal because of its fast random access.

### 3. **`deque`**
   - **Description:** A double-ended queue that allows fast insertions and deletions at both the beginning and end, while still providing fast random access like a vector.
   - **Use Case:** Use a `deque` when you need to frequently add or remove elements from both ends of the container.
   - **Example:**
     - **Browser History:** For implementing browser history, where you may want to quickly go back and forth between pages, a `deque` is suitable because you can efficiently push and pop pages from both ends.

### 4. **`map`**
   - **Description:** An associative container that stores key-value pairs, with fast retrieval based on the key. The elements are ordered by the key.
   - **Use Case:** Use a `map` when you need to store key-value pairs with unique keys and need to retrieve values based on their keys efficiently.
   - **Example:**
     - **Dictionary Implementation:** If you're building a dictionary where words (keys) map to definitions (values), a `map` is ideal because it allows fast lookups and ensures that the keys are unique.

### 5. **`set`**
   - **Description:** A container that stores unique elements in a sorted order. It provides fast lookup, insertion, and deletion operations.
   - **Use Case:** Use a `set` when you need to maintain a collection of unique elements and need to check for the presence of elements frequently.
   - **Example:**
     - **Unique Usernames:** If you're managing a system where you need to ensure that usernames are unique, a `set` is ideal because it prevents duplicate entries and allows fast checks for existing usernames.

Each container excels in different scenarios, and the choice of container should be based on the specific requirements of your application.

*/





}
