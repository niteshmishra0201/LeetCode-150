#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> output(n, 1);

    
    for (int i = 1; i < n; i++) {
        output[i] = output[i-1] * nums[i-1];
    }


    int rightProduct = 1;
    for (int i = n-1; i >= 0; i--) {
        output[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return output;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Output: ";
    for (int x : result) cout << x << " ";
    cout << endl; // 24 12 8 6
    return 0;
}


// Explanation(Pseudocode:)

// // Phase 1: output[i] = product of everything left of i
// output[0] = 1
// for i from 1 to n-1:
//     output[i] = output[i-1] * nums[i-1]

// // Phase 2: multiply right products on the fly
// rightProduct = 1
// for i from n-1 to 0:
//     output[i] = output[i] * rightProduct
//     rightProduct *= nums[i]