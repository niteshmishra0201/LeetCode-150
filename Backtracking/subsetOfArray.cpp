#include<iostream>
#include<vector>

using namespace std;

void subsetofArray(int arr[] , int n , int index , vector<int>& current){
    if(index == n ) {
        cout<< "{";
        for(int x : current) cout<< x<< " " ;
        cout<<"}";
        return;
    }

    //Include
    current.push_back(arr[index]);
    subsetofArray(arr , n , index+1 , current);

    //Exclude
    current.pop_back();
    subsetofArray(arr , n, index+1 , current);
}

int main(){
    int arr[] = {1,2,3};
    vector<int> current;
    subsetofArray(arr,  3, 0, current);

}