#include <iostream>
using namespace std;

int clearBit(int n, int i)
{
    return n & ~(1 << i);
}

int main()
{
    int n = 13;
    int i = 2;

    cout << clearBit(n, i);

    return 0;
}