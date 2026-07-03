#include<iostream>
#include<vector>
using namespace std;

void dutchNational(vector<int>& arr){
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid] , arr[low]);
            mid++;
            low++;
        }else if(arr[mid] == 2){
            swap(arr[mid] , arr[high]);
            high--;
        }else{
            mid++;
        }
    }
}

int main(){
    vector<int> arr = {1,0,2,1,0,2,0};
    dutchNational(arr);

    cout<<"after sorting";

    for(int i=0 ; i<arr.size() ; i++){

        cout<<arr[i];
    }
}