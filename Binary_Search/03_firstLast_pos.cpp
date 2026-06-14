#include<bits/stdc++.h>
using namespace std;


// Helper 1: Find First position of target


int FindfirstPos(vector<int>& arr , int target){
    int low = 0;
    int high = arr.size()-1;
    int firstPos = -1 ;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            firstPos = mid;
            high = mid -1;
        }else if(arr[mid] < target){
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return firstPos;
}


// Helper 2: Find LAST position of target

int FindLastPos(vector<int>& arr , int target){
    int low = 0;
    int high = arr.size()-1;
    int LastPos = -1 ;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            LastPos = mid;
            high = mid -1;
        }else if(arr[mid] < target){
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return LastPos;
}


pair<int,int> searchRange(vector<int>& arr, int target) {
    int first = FindfirstPos(arr, target);

    // Optimization: If first not found, no need to search for last!
    if (first == -1) return {-1, -1};

    int last = FindLastPos(arr, target);

    return {first, last};
}
