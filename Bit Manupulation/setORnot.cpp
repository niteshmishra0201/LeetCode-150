#include<iostream>
using namespace std;

bool isSet(int n , int i){
    return (n & (1<<i) ) != 0;
}

int main(){
    cout<<isSet(13 , 1);
}