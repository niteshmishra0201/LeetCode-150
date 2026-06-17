#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<vector<int>> searchTriplets(vector<int>& arr) {

    sort(arr.begin(), arr.end()); // Step 1: Sort
    vector<vector<int>> triplets;

    for (int i = 0; i < (int)arr.size() - 2; i++) {

        // Skip duplicate values for the fixed element
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        // Early termination: if smallest possible triplet > 0, stop
        if (arr[i] > 0) break;

        int left  = i + 1;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                triplets.push_back({arr[i], arr[left], arr[right]});

                // Skip duplicates for left pointer
                while (left < right && arr[left] == arr[left + 1])
                    left++;
                // Skip duplicates for right pointer
                while (left < right && arr[right] == arr[right - 1])
                    right--;

                left++;
                right--;

            } else if (sum < 0) {
                left++;  // Need bigger sum
            } else {
                right--; // Need smaller sum
            }
        }
    }
    return triplets;
}