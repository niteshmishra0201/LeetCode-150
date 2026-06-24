#include <iostream>
using namespace std;

int productOfDigit(int n){

    //If n == negetive number 
    if(n<0) n=-n;

    //Base Case
    if(n==0) return 0;

     // last digit  +  sum of remaining digits
    return (n%10)*productOfDigit(n/10);
}

int main()
{
    cout << productOfDigit(1234) << endl;

    return 0;
}