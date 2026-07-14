#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string decimalToBinary(int n)
{
    if(n == 0)
        return "0";

    string result = "";

    while(n > 0)
    {
        if(n % 2 == 0)
            result += '0';
        else
            result += '1';

        n /= 2;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    cout << decimalToBinary(28);

    return 0;
}