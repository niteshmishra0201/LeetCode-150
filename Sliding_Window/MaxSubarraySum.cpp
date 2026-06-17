#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int>& arr , int k){
    int n = arr.size();

    if(n<k) return -1;

    //step-1 Build the first Window sum

    int windowSUm = 0;
    for(int i = 0; i<k; i++){
        windowSUm += arr[i];
    }

    int maxSum = windowSUm;

    // Step 2: Slide the window from index K to end

    for(int i=k; i<n; i++){
        windowSUm = windowSUm + arr[i];
        windowSUm = windowSUm - arr[i-k];
        maxSum = max(maxSum , windowSUm);
    }

    return maxSum;
}


int main(){
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int K = 3;
    cout << "Maximum Sum: " << maxSubarraySum(arr, K) << endl;
    // Output: 9
    return 0;
}