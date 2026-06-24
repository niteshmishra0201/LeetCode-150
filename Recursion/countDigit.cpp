#include <iostream>
using namespace std;

int countDigit(int n) {

    // BASE CASE — no digits left
    if (n == 0) return 0;

    // RECURSIVE CASE
    // last digit  +  sum of remaining digits
    return 1 + countDigit(n / 10);
}

int main (){
    countDigit(1234);
    return 0;
}