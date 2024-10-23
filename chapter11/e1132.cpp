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
using std::multimap;
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

    // Define a multimap where the key is the author's name (std::string)
    // and the value is the title of their work (std::string)
    multimap<string, string> authors;

    // Insert authors and their works into the multimap
    authors.insert({"Hemingway", "The Old Man and the Sea"});
    authors.insert({"Orwell", "1984"});
    authors.insert({"Hemingway", "A Farewell to Arms"});
    authors.insert({"Orwell", "Animal Farm"});
    authors.insert({"Fitzgerald", "The Great Gatsby"});
    authors.insert({"Joyce", "Ulysses"});
    authors.insert({"Joyce", "Dubliners"});

    // Print the list of authors and their works alphabetically
    string current_author = "";
    for (auto const & entry : authors) {
        string const & author = entry.first;
        string const & work = entry.second;
        
        // Check if we are printing a new author
        if (author != current_author) {
            // Print the author's name
            cout << author << ":" << endl;
            // Update the current_author to the new author
            current_author = author;
        }
        
        // Print the work (with indentation for readability)
        cout << "    " << work << endl;
    }

    return 0;

}
