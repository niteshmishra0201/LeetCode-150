#include <iostream>
using namespace std;

int fibNumber(int n){
    //Base Case
    if(n==0) return 0;
    if(n==1) return 1;

    return fibNumber(n-1) + fibNumber(n-2);
}

int main(){
    int result = fibNumber(10);
    cout<<result;

    return 0;
}