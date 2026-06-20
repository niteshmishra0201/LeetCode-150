#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;

int maxNumberOfBalloons(string text) {

    // ── Step 1: Count frequency of every character in text ──
    unordered_map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    // ── Step 2: For each character in "balloon", compute how many

    int ans = INT_MAX;

    ans = min(ans, freq['b'] / 1);  
    ans = min(ans, freq['a'] / 1);  
    ans = min(ans, freq['l'] / 2);  
    ans = min(ans, freq['o'] / 2);  
    ans = min(ans, freq['n'] / 1);  

    // The minimum across all characters is the bottleneck
    return ans;
}

int main() {

    // Test 1: basic case
    cout << maxNumberOfBalloons("nlaebolko") << "\n";        // Expected: 1

    // Test 2: multiple balloons possible
    cout << maxNumberOfBalloons("loonbalxballpoon") << "\n"; // Expected: 2

    // Test 3: missing characters entirely
    cout << maxNumberOfBalloons("leetcode") << "\n";          // Expected: 0

    return 0;
}