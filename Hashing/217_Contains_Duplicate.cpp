#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool ContainDuplicaates(vector<int>& nums){
    unordered_set<int> seen;
    for(int num : nums){
        if(seen.count(num)>0){
            return true;
            seen.insert(num);
        }
        return false;
    }

}

int main(){
    vector<int> nums = {1, 2, 3, 1};
    cout << (ContainDuplicaates(nums) ? "true" : "false") << endl; 
    return 0;
}



// Explanation (Pseudocode)

// create empty hashset
// for each number in nums:
//     if number exists in set → return true
//     add number to set
// return false