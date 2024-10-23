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


class BinStrTree {
// new Treenode ... value-like implementation
// smart pointer like implementation 
private:
  TreeNode *root;
}

class TreeNode {
public:
  TreeNode
  (std::string & s = std::string(), int const & c,
   TreeNode const & l_tn, TreeNode const & r_tn):
  value(s), count(c), left(&l_tn), right(&r_tn) {}

  //default copy-constructor and copy-assigment

private:
  std::string value;
  int count;
  TreeNode * left;
  TreeNode * right;
};


int main (int argc, char** argv){





}

