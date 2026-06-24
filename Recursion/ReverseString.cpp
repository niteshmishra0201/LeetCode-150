#include <iostream>
#include <string>
using namespace std;

void reverseSting(string& s , int left , int right){
    //Base Case
    if(left <= right) return ;

    //Swap
    swap(s[left] , s[right]);

    reverseSting(s , left+1 , right-1);
}

int main(){
    string s= "Nitesh";
    reverseSting (s , 0 , s.length()-1);
    cout<<s<<endl;

    return 0;
}


