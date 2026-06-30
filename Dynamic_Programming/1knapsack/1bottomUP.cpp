#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int bottomUp(vector<int>& wt , vector<int>& val , int W){
    int n = wt.size();

    vector<vector<int>> dp(n+1 , vector<int>(W+1 , 0));

    for(int i=1 ; i<=n ; i++){
        for(int w = 0 ; w<=W ; w++){
         //exclude 
            dp[i][w] = dp[i-10][w];

            //Include

            if(wt[i-1] <= w){
                int include = val[i-1] + dp[i-1][w - wt[i-1]];
                dp[i][w] = max(dp[i][w] , include);
            }
        }
    }
    return dp[n][W];

    
}

int main() {
    vector<int> wt  = {2, 3, 4};
    vector<int> val = {3, 4, 5};
    int W = 6;
    cout << bottomUp(wt, val, W) << endl;  // 8
    return 0;
}