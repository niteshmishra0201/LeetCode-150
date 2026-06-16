// 📋 Problem Statement
// Given a sorted array and a target sum, find a pair of numbers whose sum equals the target. Return their indices (1-based).

// Example: arr = [1, 2, 3, 4, 6], target = 6 → Output: [1, 3] (arr[1]+arr[3] = 2+4 = 6)

#include <vector>
using namespace std;

vector<int> pairWithTargetSum(vector<int> &arr, int target)
{

    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {

        int currentSum = arr[left] + arr[right];

        if (currentSum == target)
        {
            // Found! Return 1-based indices
            return {left + 1, right + 1};
        }
        else if (currentSum < target)
        {
            // Sum too small → need bigger number → move left right
            left++;
        }
        else
        {
            // Sum too big → need smaller number → move right left
            right--;
        }
    }

    return {-1, -1}; // No pair found
}