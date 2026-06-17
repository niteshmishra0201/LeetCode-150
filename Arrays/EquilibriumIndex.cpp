#include<iostream>
#include<vector>
using namespace std;

int equilibriumIndex(vector<int>& arr){
    int n = arr.size();
    int totalSum = 0;

    for(int i = 0; i <= n; i++){
        totalSum += arr[i];
    }

    int leftSum = 0;
    for(int j = 0; j<n ; j++){
        int RightSum = totalSum - leftSum - arr[j];

        if(leftSum == RightSum){
            return j;
        }

        leftSum += arr[j];

    }
     return -1;
}