#include<iostream>
#include<string>
using namespace std;

bool stringPallindrom(string& s , int left , int right){
    if(left>=right) return true;

    if(s[left] != s[right]) return false;

    stringPallindrom(s, left+1 , right-1);
}

int main(){
    string s= "nitin";
    
    cout << stringPallindrom(s, 0, s.size()-1) << endl;
}