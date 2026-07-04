#include<iostream>
#include<vector>
using namespace std;

int findDuplicates(vector<int>& nums){
    int slow = 0;
    int fast = 0;

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(fast != slow);

    slow = 0;
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;

}

int main(){
    vector<int> nums = {1,3,4,2,2};
    cout<<"Duplicate is "<<findDuplicates(nums)<<endl;

    vector<int> nums2 = {3, 1, 3, 4, 2};
    cout<<"Now duplicate is "<<findDuplicates(nums2)<<endl;
}