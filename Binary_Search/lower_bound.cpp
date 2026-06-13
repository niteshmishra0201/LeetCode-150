#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target)
        {

            // mid is a POTENTIAL answer
            // but maybe there's an even smaller index
            // that also satisfies arr[i] >= target
            ans = mid;
            high = mid - 1;
        }
        else
        {
            // arr[mid] < target
            // mid is too small, go RIGHT
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 3, 5, 5, 7, 9};
    
    cout << lowerBound(arr, 5) << endl;  // Output: 2
    
    cout << lowerBound(arr, 10) << endl; // Output: 6 (n = out of bounds)
    
    return 0;
}