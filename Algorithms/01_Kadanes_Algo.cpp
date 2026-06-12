#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArraySum(vector<int>& nums){
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int num : nums){
        currentSum += num;
        maxSum = max(maxSum , currentSum);

        if(currentSum<0){
            currentSum =0;
        }
    }
    return maxSum;

}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Max Subarray Sum: " << maxSubArraySum(nums) << endl; // 6
    return 0;
}


// Explanation(PseudoCode)

// currentSum = 0
// maxSum = INT_MIN

// for each num in nums:
//     currentSum += num
//     maxSum = max(maxSum, currentSum)
//     if currentSum < 0:
//         currentSum = 0   ← throw away negative running sum


// Interviewer can also ask some follow up Questions LIke Below(notes ans answer will update Soon)


// Q1. How do you also return the actual subarray (start and end indices), not just the sum?
// Q2. What if the array is circular — meaning you can wrap around from the end back to the beginning?
// Q3. What if you needed the maximum product subarray instead of sum?
// Q4. What is the divide and conquer approach to this problem and what is its time complexity?