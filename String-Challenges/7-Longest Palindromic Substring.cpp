#include <iostream>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    int n = s.length();
    if (n == 0) return "";

    int start = 0, maxLength = 1;

    for (int i = 0; i < n; ++i) {
        int left = i, right = i;
        while (left >= 0 && right < n && s[left] == s[right]) {
            --left;
            ++right;
        }
        int len1 = right - left - 1;

        left = i, right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            --left;
            ++right;
        }
        int len2 = right - left - 1;

        int len = max(len1, len2);
        if (len > maxLength) {
            maxLength = len;
            start = i - (maxLength - 1) / 2;
        }
    }

    return s.substr(start, maxLength);
}

int main() {
    string s = "babad";
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}
