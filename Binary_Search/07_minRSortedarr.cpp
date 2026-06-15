#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;
    int minVal = INT_MAX;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // OPTIMIZATION: If current search space is
        // already sorted → leftmost element is minimum
        // No need to search further in this range!
        if (arr[low] <= arr[high])
        {
            minVal = min(minVal, arr[low]);
            break;
        }

        // SITUATION 1: mid is in LEFT (bigger) half
        // arr[mid] > arr[high] → rotation point is RIGHT
        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        // SITUATION 2: mid is in RIGHT (smaller) half
        // arr[mid] <= arr[high] → mid could be minimum
        else
        {
            minVal = min(minVal, arr[mid]);

            high = mid - 1;
        }
    }
    return minVal;
}