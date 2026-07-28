#include <iostream>
#include <vector>
using namespace std;

void printPowerSet(vector<int>& arr)
{
    int n = arr.size();

    for (int mask = 0; mask < (1 << n); mask++)
    {
        cout << "{ ";

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                cout << arr[i] << " ";
        }

        cout << "}" << endl;
    }
}

int main()
{
    vector<int> arr = {1,2,3};

    printPowerSet(arr);
}