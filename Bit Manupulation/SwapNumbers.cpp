#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int x = 10;
    int y = 20;

    swapNumbers(x, y);

    cout << "After Swap " << x << " " << y << endl;

    return 0;
}