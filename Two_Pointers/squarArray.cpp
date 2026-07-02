#include<iostream>
#include<vector>
using namespace std;

vector<int> makeSquar(vector<int> arr){
    int n = arr.size();
    vector<int> result(n);
    int highIndex = n-1;

    int left = 0;
    int right = n-1;

    while(left<=right){
        int leftsq = arr[left]*arr[left];
        int rightsq = arr[right]*arr[right];

        if(leftsq>rightsq){
            result[highIndex--] = leftsq;
            left++;
        }else{
            result[highIndex--] = rightsq;
            right--;
        }
    }
    return result;

}

