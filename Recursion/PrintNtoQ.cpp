#include<iostream>
using namespace std;

void countDown(int n ){
    //Base Case
    if(n==0) return;

    cout<<n<<endl;
    countDown(n-1);
}

int main(){
    countDown(5);
    return 0;
}