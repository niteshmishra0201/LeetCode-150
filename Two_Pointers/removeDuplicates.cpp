#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> arr){
    int write = 1;

    for(int read = 1; read<arr.size()-1; read++){
        if(arr[read] != arr[read-1]){
            arr[write] == arr[read];
            write++;
        }
    }
    return write;
}

int main(){
    vector<int> arr = {1,1,1,2,3,3,3,4,5,6};
    int k = removeDuplicates(arr);

    cout<<"lenght is "<<k;



    return 0;
}