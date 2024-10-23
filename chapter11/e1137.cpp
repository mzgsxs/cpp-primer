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
using std::map;
using std::set;
using std::multiset;

#include<utility>
using std::pair;

#include<iostream>
using std::istream;
using std::cin;
using std::cout;
using std::endl;

#include<fstream>
using std::ifstream;

#include<iterator>
using std::istream_iterator;
using std::ostream_iterator;


#include"my_utils.h"



int main(){

/*
In C++, both ordered and unordered containers have their own advantages, depending on the specific requirements of your application. Below is a comparison of the advantages of unordered containers (e.g., `unordered_map`, `unordered_set`) and their ordered counterparts (e.g., `map`, `set`):

### Advantages of Unordered Containers:
1. **Faster Average Time Complexity for Lookups, Insertions, and Deletions:**
   - **Unordered Containers:** Typically have average constant time complexity, `O(1)`, for operations like lookup, insertion, and deletion, thanks to their underlying hash table implementation.
   - **Ordered Containers:** These operations take logarithmic time, `O(log n)`, because they are implemented as balanced binary search trees (e.g., red-black trees).

2. **No Overhead for Maintaining Order:**
   - **Unordered Containers:** Do not maintain any particular order of elements, reducing the overhead associated with ordering.
   - **Ordered Containers:** Must maintain order, which adds some overhead to operations like insertion and deletion.

3. **Simplicity for Simple Key-Based Lookups:**
   - **Unordered Containers:** Ideal for scenarios where you just need fast key-based lookups without caring about the order of elements.
   - **Ordered Containers:** More complex if order is not needed, as maintaining order may introduce unnecessary complexity.

### Advantages of Ordered Containers:
1. **Maintained Order of Elements:**
   - **Ordered Containers:** Automatically maintain elements in a sorted order based on their keys. This is useful for scenarios where you need to iterate over elements in a specific order.
   - **Unordered Containers:** Do not maintain any order of elements, which can be a disadvantage if ordered traversal is needed.

2. **Range-Based Queries:**
   - **Ordered Containers:** Support efficient range queries (e.g., finding all elements between two keys) using iterators and functions like `lower_bound` and `upper_bound`.
   - **Unordered Containers:** Do not support range-based queries efficiently, as the elements are not ordered.

3. **Predictable Iteration:**
   - **Ordered Containers:** Since the elements are stored in a specific order, iteration over the container is predictable and consistent.
   - **Unordered Containers:** Iteration order is not guaranteed to be consistent between runs, as it depends on the hash function and the state of the hash table.

4. **Better Worst-Case Performance:**
   - **Ordered Containers:** Guarantee `O(log n)` performance in the worst case, which can be important in scenarios where worst-case performance is critical.
   - **Unordered Containers:** Although average-case performance is `O(1)`, worst-case performance can degrade to `O(n)` if many elements hash to the same bucket (hash collisions).

### When to Use Each Type:
- **Use Unordered Containers When:**
  - You need fast average-case lookups, insertions, and deletions.
  - The order of elements does not matter.
  - You are working with large datasets where the constant time operations of hash tables are beneficial.

- **Use Ordered Containers When:**
  - You need to maintain elements in a sorted order.
  - You require efficient range-based queries.
  - Predictable iteration order is important.
  - You need guaranteed worst-case performance.

### Summary:
- **Unordered containers** offer faster average performance for key-based operations and lower overhead when order is not needed.
- **Ordered containers** provide the advantage of sorted data, efficient range queries, and more predictable behavior at the cost of slightly slower operations due to the need to maintain order.
*/





}
