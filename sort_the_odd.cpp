// Task
// You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.

// Examples
// [7, 1]  =>  [1, 7]
// [5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
// [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]




#include <iostream>

class Kata{
public:
    std::vector<int> sortArray(std::vector<int> array) {
      std::vector<int> result(array.begin(), array.end());
      
      int left = 0;
      int right = result.size() - 1;
      
      while (right > left) {
       if (result[left] % 2 != 0 && result[right] % 2 != 0 ) {
         std::swap(result[left], result[right]);
         left++;
         right--;
       } else {
         right--;
       }
      }
      
        return result;
    }
};
//  THESE TESTS PASSED!
// [ 1, 3, 2, 8, 5, 4 ]
//      l
//         r


// {0, 3, 1, 8, 5}
//     l
//        r


/* 
TODO: FIGURE OUT WHY THESE TEST DON'T PASS

Expected: [ 1, 3, 2, 8, 5, 4, 11 ]
Actual: [ 11, 1, 2, 8, 3, 4, 5 ]
ExtendedTest2
Expected: [ 2, 22, 1, 5, 4, 11, 37, 0 ]
Actual: [ 2, 22, 37, 11, 4, 1, 5, 0 ]
ExtendedTest3
Expected: [ 1, 1, 5, 11, 2, 11, 111, 0 ]
Actual: [ 5, 1, 11, 11, 2, 111, 1, 0 ]
ExtendedTest4
Expected: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 ]
Actual: [ 9, 2, 3, 4, 5, 6, 7, 8, 1, 0 ]
ExtendedTest5
ExtendedTest6
Expected: [ 0, 1, 2, 3, 4, 5, 8, 7, 6, 9 ]
Actual: [ 0, 1, 2, 3, 4, 9, 8, 7, 6, 5 ]
RandomTests
Expected: [ 5, 7, 36, 8, 91 ]
Actual: [ 91, 5, 36, 8, 7 ]




*/
