// Given a singly linked list, write code to find the most frequent element value and how many times it ocurrs. In case of duplicate number of ocurrences, return the element value closest to the head.

// The output should be returned as a pair, where the first item is the value, and the second the number of times it appears.

// Example: input 1->2->3->4->2->3->2

// Output: (2,3): Element 2 ocurrs 3 times

// Example: input 4->3->5->3->4->5

// Output: (4,2): Element 4 ocurrs 2 times



#include <forward_list>
#include <utility>
#include <unordered_map>



std::pair<int,int> findMostFrequent(std::forward_list<int> l) {
  std::pair<int,int> output;
  std::unordered_map<int, int> occurs;
  
  for (int node : l) {
    occurs[node]++;
  }
  
  output.first = l.front();
  output.second = occurs[output.first];
//   std::cout << output.second << std::endl;
  
  for (auto [key, val] : occurs){
//     std::cout << key << " - " << val << std::endl;
    if (val > output.second) {
      output.first = key;
      output.second = val;
    }
  }
  
  return output;
}
