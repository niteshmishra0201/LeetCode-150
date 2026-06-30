#include<iostream>
#include<vector>
using namespace std;

bool solve(vector<int> arr , int i , int target){

    //Base Case
    //1. we reach to the target
    if(target == 0) return true;

    //2. No element left but target is not achieve
    if(i<0) return false;

    //3.Negetive target
    if(target<0) return false;

    //Include Condition
    bool include = solve(arr , i-1 , target - arr[i]);

    //Exclude Condition
    bool Exclude = solve(arr , i-1 , target);

    return include || Exclude;
}

int main() {
    vector<int> arr = {3, 1, 5, 9, 12};
    int target = 8;

    int n = arr.size();
    if (solve(arr, n - 1, target))
        cout << "YES — subset exists!" << endl;
    else
        cout << "NO — no subset found" << endl;

    // Output: YES — subset exists! (3 + 5 = 8)
    return 0;
}