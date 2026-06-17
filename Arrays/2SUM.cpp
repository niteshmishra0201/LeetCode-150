#include <iostream>
#include <vector>
using namespace std;

// Returns 1-based indices of the pair
vector<int> pairWithTargetSum(vector<int>& arr, int target) {

    int left  = 0;
    int right = arr.size() - 1;

    while (left < right) {

        int currentSum = arr[left] + arr[right];

        if (currentSum == target) {
            // Found! Return 1-based indices
            return {left + 1, right + 1};

        } else if (currentSum < target) {
            // Sum too small → need bigger number → move left right
            left++;

        } else {
            // Sum too big → need smaller number → move right left
            right--;
        }
    }

    return {-1, -1}; // No pair found
}


//Explanation (PseudoCode)

// 1.Place left pointer at index 0 (smallest element), right pointer at last index (largest element)

// 2.Calculate currentSum = arr[left] + arr[right]

// 3.If currentSum == target → Found it! Return [left+1, right+1]

// 4.If currentSum < target → We need a bigger sum → move left++ (go to a larger number)

// 5.If currentSum > target → We need a smaller sum → move right-- (go to a smaller number)

// 6.Repeat until left < right