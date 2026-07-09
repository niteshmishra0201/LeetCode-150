#include<iostream>
#include<vector>
using namespace std;

int findMax(int arr[] , int index , int size){
    if(index == size-1) return arr[index];

    int remainingArr = findMax(arr , index+1 , size);

    return max(arr[index] , remainingArr);


}

int main(){
    int arr[] = {3, 7, 1, 9, 4, 6};
    int size = 6;
    cout << "Max = " << findMax(arr, 0, size) << endl;
}