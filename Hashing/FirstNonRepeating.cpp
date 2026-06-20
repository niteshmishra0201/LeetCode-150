#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int firstUniqChar(string s)
{

    // Step 1: Build frequency map

    unordered_map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    // ── Step 2: Find first character with frequency 1 ──
    // We MUST walk the original string (not the map) to preserve left-to-right order
    // unordered_map does NOT guarantee insertion order!
    for (int i = 0; i < s.size(); i++)
    {
        if (freq[s[i]] == 1)
        {
            return i; // first unique character found
        }
    }

    return -1; // no unique character exists
}

int main()
{

    // Test 1: first character is unique
    cout << firstUniqChar("leetcode") << "\n"; // Expected: 0

    // Test 2: unique character in middle
    cout << firstUniqChar("loveleetcode") << "\n"; // Expected: 2

    return 0;
}