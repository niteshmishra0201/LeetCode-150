#include<iostream>
#include<vector>
using namespace std;

int findMin(int arr[] , int index , int size){
    if(index == size-1) return arr[index];

    int remainingArr = findMin(arr , index+1 , size);

    return min(arr[index] , remainingArr);


}

int main(){
    int arr[] = {3, 7, 1, 9, 4, 6};
    int size = 6;
    cout << "Min = " << findMin(arr, 0, size) << endl;
}