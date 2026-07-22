#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

bool isPallindrome(string str){
    string filterd ="";

    for(char ch : str){
        if(isalpha(ch)){
            filterd += tolower(ch);

        }


    }

    string reversed = filterd;
    reverse(reversed.begin() , reversed.end());
    return filterd == reversed;
}


int main()
{
    string str = "A1b2c!a";

    cout << isPallindrome(str);

    return 0;
}