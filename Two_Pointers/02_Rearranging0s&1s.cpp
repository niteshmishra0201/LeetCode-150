// Problem Statement
// Given an array containing only 0s and 1s, rearrange it so all 0s come first and all 1s come after — in-place, without extra space.

// Example: arr = [1, 0, 1, 0, 0, 1] → Output: [0, 0, 0, 1, 1, 1]
#include<iostream>
#include<vector>
using namespace std;


void rearrange(vector<int>& arr) {

    int left  = 0;
    int right = arr.size() - 1;

    while (left < right) {

        // Move left pointer past all 0s (they're in the right place)
        while (left < right && arr[left] == 0)
            left++;

        // Move right pointer past all 1s (they're in the right place)
        while (left < right && arr[right] == 1)
            right--;

        // Now arr[left] = 1 and arr[right] = 0  → swap!
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}


//Code Explantion


// 1 left = 0, right = n-1
// 2 Move left right while arr[left] == 0 (already in place)
// 3 Move right left while arr[right] == 1 (already in place)
// 4 If left < right, swap arr[left] and arr[right]
// 5 Repeat until left >= right