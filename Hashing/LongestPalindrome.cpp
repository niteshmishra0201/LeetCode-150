#include <iostream>
#include <unordered_map>
#include <climits>
#include <string>

using namespace std;

int LongestPalindrome(string s){
    unordered_map<char , int> freq;
    for(char c : s){
        freq[c]++;
    }

    int lenght = 0 ;
    bool OddFound = false;

    for(auto& [ ch , cnt] : freq){

    }

}