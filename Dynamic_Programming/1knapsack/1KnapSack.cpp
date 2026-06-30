//Appraoch 1 - recursive approach 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//i == i is current item index we are deciding(starting from last item)
//w== capacity of the bag
int solveKnapsack(vector<int>& wt , vector<int>& val , int i , int w){

    //base case - No item left and capacity is 0

    if(i<0 || w == 0){
        return 0;
    }

    if(wt[i] > w){
        return solveKnapsack(wt , val , i-1 , w);

    }

    int include = val[i] + solveKnapsack(wt , val , i-1 , w-wt[i]);

    int exclude = solveKnapsack(wt , val , i-1 , w);

    return max(include , exclude);

}

//This function is Just written for calculate the last index(n-1)
//if you don't wnat to write this you can aoid this but then in solveKnapsack function write wt.size()-1 insted of i 

int knapsack(vector<int>& wt, vector<int>& val, int W) {
    int n = wt.size();
    return solveKnapsack(wt, val, n - 1, W);
}

int main() {
    vector<int> wt  = {2, 3, 4};
    vector<int> val = {3, 4, 5};
    int W = 6;
    cout << knapsack(wt, val, W) << endl;  // 8
    return 0;
}
