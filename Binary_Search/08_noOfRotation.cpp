#include <bits/stdc++.h>
using namespace std;

int countRotations(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    // Store index of minimum element
    int minIndex = 0;     // Default: index 0 (no rotation)
    int minVal = INT_MAX; // Track minimum value seen

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // OPTIMIZATION: Current window is fully sorted
        
        if (arr[low] <= arr[high])
        {
            // If this window's min is smaller than
            // our current best, update answer
            if (arr[low] < minVal)
            {
                minVal = arr[low];
                minIndex = low; // ← Track INDEX not just value
            }
            break; // Done with this window
        }

        // SITUATION 1: mid is in LEFT (bigger) half
        if (arr[mid] > arr[high])
        {
            // Left half is sorted, minimum NOT here
            // Move to RIGHT half
            low = mid + 1;
        }

        // SITUATION 2: mid is in RIGHT (smaller) half
        else
        {
            // arr[mid] could be the minimum
            if (arr[mid] < minVal)
            {
                minVal = arr[mid];
                minIndex = mid; // ← Save index of potential min
            }
            // Search LEFT for even smaller minimum
            high = mid - 1;
        }
    }

    // Number of rotations = index of minimum element
    return minIndex;
}
