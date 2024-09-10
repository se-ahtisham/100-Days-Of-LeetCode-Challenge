#include <iostream>
#include <string>

using namespace std;

int lengthOfLongestSubstring(const string& s) {
    int map[128] = {-1};  // Array to store the last index of each character
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.length(); ++end) {
        char currentChar = s[end];
        int index = currentChar;  // Implicit conversion to int

        if (map[index] >= start) {
            start = map[index] + 1;
        }

        map[index] = end;
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
