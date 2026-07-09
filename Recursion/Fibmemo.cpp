#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int , int> memo;
int fibmemo(int n){
    //Base case
    if(n==0) return 0;
    if(n==1) return 1;

    //chechinf in hashmap
    if(memo.count(n)) return memo[n];

    memo[n] = fibmemo(n-1)+fibmemo(n-2);
    return memo[n];



}

int main() {
    cout << fibmemo(10) << endl; 
    return 0;
}