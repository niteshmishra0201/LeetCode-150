#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(string binary)
{
    int decimal = 0;

    for(char bit : binary)
    {
        decimal = decimal * 2 + (bit - '0');
    }

    return decimal;
}

int main()
{
    cout << binaryToDecimal("11100");

    return 0;
}