#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool isSafe(int row , int col,
unordered_set<int>& cols,
unordered_set<int>& dign1,
unordered_set<int>& dign2){
    //check is this col is already occupy by queen
    if(cols.count(col)>0) return false;

    //check is this diagonal is already occupied
    if(dign1.count(row-col)>0) return false;

    //check is this right top to bottom left diagonal is occupied or not
    if(dign2.count(row+col)>0) return false;

    // all safe 
    return true;
}

void solve(int row, int n,
vector<int> &board,
unordered_set<int>& cols,
unordered_set<int>& diag1,
unordered_set<int>& diag2,
vector<vector<int>>& results)
{
    if (row == n)
    { // base case: all queens placed
        results.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (!isSafe(row, col, cols, diag1, diag2))
            continue; // unsafe — skip this column

        // PLACE
        board[row] = col;
        cols.insert(col);
        diag1.insert(row - col);
        diag2.insert(row + col);

        // RECURSE
        solve(row + 1, n, board, cols, diag1, diag2, results);

        // REMOVE (backtrack)
        board[row] = -1;
        cols.erase(col);
        diag1.erase(row - col);
        diag2.erase(row + col);
    }
}