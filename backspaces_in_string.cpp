// Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"

// Your task is to process a string with "#" symbols.

// Examples
// "abc#d##c"      ==>  "ac"
// "abc##d######"  ==>  ""
// "#######"       ==>  ""
// ""              ==>  ""



std::string cleanString(const std::string &s) {
  int backspaces = 0;
  int letters = 0;
  
  for (char el : s) {
    if (isalpha(el)) {
      letters++;
    } else {
      backspaces++;
    }
  }
  
  if (backspaces > letters) {
    return "";
  }
  
  
  
  return "";
}
