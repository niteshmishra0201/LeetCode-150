#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums)
{
    int ans = 0;

    for (int x : nums)
        ans ^= x;

    return ans;
}

int main(){
    vector<int> nums = {1,1,2,2,3};
    cout<<singleNumber(nums);
}