#include <iostream>
#include <vector>
using namespace std;

// memo[i][j] stores result of solve(i, j)
vector<vector<int>> memo;

bool solve(vector<int> &arr, int i, int target)
{

    // Base case: target became 0 → subset found
    if (target == 0)
        return true;

    // Base case: target negative
    if (target < 0)
        return false;

    if (memo[i][target] != -1)
        return memo[i][target];

    bool exclude = solve(arr, i - 1, target);

    // INCLUDE arr[i]: take this element, reduce target
    bool include = solve(arr, i - 1, target - arr[i]);

  
    memo[i][target] = include || exclude;

    return memo[i][target];
}

int main()
{
    vector<int> arr = {3, 1, 5};
    int target = 6;
    int n = arr.size();

    memo.assign(n, vector<int>(target + 1, -1));

    if (solve(arr, n - 1, target))
        cout << "YES — subset exists!" << endl;
    else
        cout << "NO — no subset found" << endl;
    return 0;
}