// Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

// Examples:

// * 'abc' =>  ['ab', 'c_']
// * 'abcdef' => ['ab', 'cd', 'ef']


#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
  std::vector<std::string> result;
  int left = 0;
  
  for (int right = 0; right < s.size(); right++) {
    if (right % 2 != 0) {
      std::string pair = s.substr(left, right - left + 1);
      result.push_back(pair);
      left = right + 1;
    } else if (right == s.size() - 1) {
      std::string pair = "";
      pair.push_back(s[right]);
      pair.push_back('_');
      result.push_back(pair);
    }
  }
  
  return result;
}

//    "abcde"
//       l
//        r
