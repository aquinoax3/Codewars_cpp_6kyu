// Count the number of Duplicates
// Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.

// Example
// "abcde" -> 0 # no characters repeats more than once
// "aabbcde" -> 2 # 'a' and 'b'
// "aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
// "indivisibility" -> 1 # 'i' occurs six times
// "Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
// "aA11" -> 2 # 'a' and '1'
// "ABBA" -> 2 # 'A' and 'B' each occur twice


#include <string>
#include <unordered_map>
#include <iostream>
#include <set>

std::size_t duplicateCount(const std::string& in) {
  std::unordered_map <char, int> dupes;
  std::size_t count = 0;
  
  for (char el : in) {
    if (dupes.find(std::tolower(el)) != dupes.end()) {
      dupes[std::tolower(el)]++;
    } else {
       dupes[el]++;
     }
  }
     
  for (auto [key,val] : dupes) {
    if (val > 1) {
      count++;
    }
    std::cout << "key: " << key << " - " << "val: " << val << std::endl;
  }
    return count;
}

