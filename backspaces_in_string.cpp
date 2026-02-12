// Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"

// Your task is to process a string with "#" symbols.

// Examples
// "abc#d##c"      ==>  "ac"
// "abc##d######"  ==>  ""
// "#######"       ==>  ""
// ""              ==>  ""



std::string cleanString(const std::string &s) {
  if (s.size() == 0) return "";
  
  std::string result = "";
  
  for (char ch : s) {
    if (ch != '#') {
     result.push_back(ch);
    } else if (!result.empty()) {
     result.pop_back();
    }
  }
  
  return result;
}
