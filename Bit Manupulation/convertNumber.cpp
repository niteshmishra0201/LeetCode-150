#include <iostream>
using namespace std;

int minBitFlips(int start, int goal)
{
    int x = start ^ goal;

    int count = 0;

    while (x)
    {
        x = x & (x - 1);
        count++;
    }

    return count;
}

int main()
{
    cout << minBitFlips(10, 7);
}