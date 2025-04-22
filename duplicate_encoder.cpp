// The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

// Examples
// "din"      =>  "((("
// "recede"   =>  "()()()"
// "Success"  =>  ")())())"
// "(( @"     =>  "))((" 
// Notes
// Assertion messages may be unclear about what they display in some languages. If you read "...It Should encode XXX", the "XXX" is the expected result, not the input!



#include <string>
#include <unordered_map>
#include <iostream>


std::string duplicate_encoder(const std::string& word){
  std::unordered_map<char, int> dupes;
  std::string result = "";
  
  for (char el : word) {
    dupes[el]++;
  }
  
  for (auto [key,val] : dupes) {
    std::cout << key << " " << val << std::endl;
  }
  
  for (char el : word) {
    if (dupes[el] > 1) {
      result += ')';
    } else {
      result += '(';
    }
  }
  
  
  return result;
}
