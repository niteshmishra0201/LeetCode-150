#include<iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    cout << isPowerOfTwo(16) << endl; // 1
    cout << isPowerOfTwo(12) << endl; // 0
    cout << isPowerOfTwo(1) << endl;  // 1
    cout << isPowerOfTwo(0) << endl;  // 0

    return 0;
}