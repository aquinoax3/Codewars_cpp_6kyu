// Given a node object representing a binary tree:

// struct node
// {
//   int value;
//   node* left;
//   node* right;
// }
// write a function that returns the sum of all values, including the root. Absence of a node will be indicated with a null value.

// Examples:

// 10
// | \
// 1  2
// => 13

// 1
// | \
// 0  0
//     \
//      2
// => 3



#include <stack>
#include <iostream>

using namespace std;

int sumTheTreeValues(node* root) {
  int result = 0;
  std::stack<node*> stack;
  
  if (root == nullptr) {
    return result;
  }
  
  node* curr = root;
  stack.push(curr);
  
  while (stack.size() > 0) {
    curr = stack.top();
    result += curr-> value;
    stack.pop();
    
    
    if (curr->right != nullptr) {
      stack.push(curr->right);
    }
    
    if (curr->left != nullptr) {
      stack.push(curr->left);
    }
      
  }
    
  return result;
  
}
