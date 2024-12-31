// Given any number of arrays each sorted in ascending order, find the nth smallest number of all their elements.

// All the arguments except the last will be arrays, the last argument is n.

// nthSmallest([1,5], [2], [4,8,9], 4) // returns 5 because it's the 4th smallest value
// Be mindful of performance.


#include <vector>
#include <algorithm>

int nthSmallest(std::vector<std::vector<int>> arr, int n) {
  std::vector<int> result;
  
  for (int i = 0; i < arr.size(); i++) {
    for(int j = 0; j < arr[i].size(); j++) {
      result.push_back(arr[i][j]);
    }
  }
  
  std::sort(result.begin(), result.end());

  return result[n - 1];
}
