// Linked Lists - Length & Count

// Implement length to count the number of nodes in a linked list.

// Length(null) => 0
// Length(1 -> 2 -> 3 -> null) => 3
// Implement Count() to count the occurrences of an integer in a linked list.

// Count(null, 1) => 0
// Count(1 -> 2 -> 3 -> nullptr, 1) => 1
// Count(1 -> 1 -> 1 -> 2 -> 2 -> 2 -> 2 -> 3 -> 3 -> nullptr, 2) => 4



/* Node Definition
struct Node {
  Node * next;
  int data;
}
*/

int Length(Node *head) {
  Node* curr = head;
  
  if (curr == nullptr) {
    return 0;
  }
  
  int count = 0;
  while (curr != nullptr) {
    count++;
    curr = curr->next;
  }
  return count;
}

int Count(Node *head, int data) {
  // Solution goes here
  Node* curr = head;
  if (curr == nullptr) {
    return 0;
  }
  
  int count = 0;
  while (curr != nullptr) {
    if (curr->data == data) {
      count++;
    }
    curr = curr->next;
  }
  
  return count;
}
