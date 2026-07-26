#include <iostream>
#include <vector>
using namespace std;

uint32_t reverseBits(uint32_t n)
{

    uint32_t result = 0;

    for (int i = 0; i < 32; i++)
    {
        int bit = n & 1;

        result <<= 1;

        result |= bit;

        n >>= 1;
    }

    return result;
}

int main(){
    
}