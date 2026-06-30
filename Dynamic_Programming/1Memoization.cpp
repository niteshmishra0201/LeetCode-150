//Approach -2 - Memoization 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//currently i don't know the size of the vector that's why just creating a 2d vector
vector<vector<int>> memo;

int solve(vector<int>& wt , vector<int>& val , int i, int w){

    //Base case
    if(i<0 || w == 0) return 0;

    //Already solved
    if(memo[i][w] != -1) return memo[i][w];

    if(wt[i] > w){
        memo[i][w] = solve(wt , val , i-1 , w);
        return memo[i][w];
    }

    int include = val[i] + solve(wt , val , i-1 , w-wt[i]);
    int Exclude = solve(wt, val , i-1 , w);

    memo[i][w] = max(include , Exclude);
    return memo[i][w];

}

int knapsack(vector<int>& wt, vector<int>& val, int W) {
    int n = wt.size();

    // Initialize 2D memo table with -1
    // Size: n rows (items) × W+1 cols (capacities 0 to W)
    memo.assign(n, vector<int>(W + 1, -1));

    return solve(wt, val, n - 1, W);
}

int main() {
    vector<int> wt  = {2, 3, 4};
    vector<int> val = {3, 4, 5};
    int W = 6;
    cout << knapsack(wt, val, W) << endl;  // 8
    return 0;
}

