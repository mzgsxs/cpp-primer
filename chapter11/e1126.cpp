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

    std::map<std::string, int> myMap;

    // Insert some key-value pairs into the map
    myMap["apple"] = 3;
    myMap["banana"] = 5;
    myMap["cherry"] = 2;

    // Subscript type and return type example
    std::string key = "apple";
    
    // The type used to subscript the map (key type)
    // This is std::string in this case
    int & value = myMap[key]; // The type returned by the subscript operator (mapped_type&)
    // !!! a reference
    
    std::cout << "The value associated with key \"" << key << "\" is: " << value << std::endl;

    return 0;

}
