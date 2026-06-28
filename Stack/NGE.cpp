#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int>& nums){
    stack<int> st;
    int n = nums.size();
    vector<int> result(n);

    for(int i = n-1; i>=0 ; i--){
        while(!st.empty() && st.top()<=nums[i]){
            st.pop();
        }

        if(st.empty()){
            result[i] = -1;
        }else{
            result[i] = st.top();
        }
        st.push(nums[i]);
    }
    return result;


}