// Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:

// a -> 1
// e -> 2
// i -> 3
// o -> 4
// u -> 5
// For example, encode("hello") would return "h2ll4". There is no need to worry about uppercase vowels in this kata.

// Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.

// For example, decode("h3 th2r2") would return "hi there".

// For the sake of simplicity, you can assume that any numbers passed into the function will correspond to vowels.




#include <string>

std::string encode(const std::string &str) {
  std::string word = str;
  std::unordered_map<char, char> vowels = {
    {'a', '1'},
    {'e', '2'},
    {'i', '3'},
    {'o', '4'},
    {'u', '5'}
  };
  
  std::string result = "";
  
  for (char el : word) {
    if (vowels.find(el) != vowels.end()) {
      result += vowels[el];
    } else {
      result += el;
    }
  }
  
  return result;
}

std::string decode(const std::string &str) {
  std::string word = str;
  std::unordered_map<int, char> vowels = {
    {'1', 'a'},
    {'2', 'e'},
    {'3', 'i'},
    {'4', 'o'},
    {'5', 'u'}
  };
  
  std::string result = "";
  
  for (char el : word) {
    if (vowels.find(el) != vowels.end()) {
      result += vowels[el];
    } else {
      result += el;
    }
  }
  
  return result;
}
// std::string decode(const std::string &str) {
//   return "";
// }
