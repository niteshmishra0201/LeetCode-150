#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {

    // ── Step 1: Build frequency map of MAGAZINE (the supply) ──
    // We count what's AVAILABLE to us
    unordered_map<char, int> supply;
    for (char c : magazine) {
        supply[c]++;
    }

    // ── Step 2: Try to fulfill each character of ransomNote ──
    // For each character NEEDED, check if supply can meet it
    for (char c : ransomNote) {

        supply[c]--;    // use one of this character from supply

        // If supply goes negative → not enough of this character
        if (supply[c] < 0) {
            return false;
        }
    }

    // All characters in ransomNote were successfully fulfilled
    return true;
}

int main() {

    // Test 1: completely different characters
    cout << canConstruct("a", "b") << "\n";          // Expected: 0 (false)

    // Test 2: not enough of a character
    cout << canConstruct("aa", "ab") << "\n";         // Expected: 0 (false)

    // Test 3: exactly enough
    cout << canConstruct("aa", "aab") << "\n";        // Expected: 1 (true)

    return 0;
}