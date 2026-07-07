#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

void printVector(const vector<int>& v) {
    cout << "[";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> test1 = {1, 2, 3, 0, 0, 0};
    merge(test1, 3, *new vector<int>{2, 5, 6}, 3);
    cout << "Test 1: ";
    printVector(test1);

    vector<int> test2 = {1};
    merge(test2, 1, *new vector<int>{}, 0);
    cout << "Test 2: ";
    printVector(test2);


    return 0;
}