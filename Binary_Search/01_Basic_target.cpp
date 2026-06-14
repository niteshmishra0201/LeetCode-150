#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& arr , int target){
    int n = arr.size();
    int low = 0;
    int high = n-1;

    while (low<=high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            return mid;

        }else if(arr[mid]<target){
            low = mid+1;

        }else{
            high = mid-1;

        }
    }
    return -1; //Not found
    
}


int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14};
    int target = 10;
    
    int result = BinarySearch(arr, target);
    
    if (result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found" << endl;
        
    return 0;
}