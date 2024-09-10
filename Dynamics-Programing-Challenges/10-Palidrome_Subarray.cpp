#include <iostream>
#include <string>

using namespace std;

int countPalindromicSubstrings(string& str) {
    int len = str.length();
    int total = 0;

    for (int i = 0; i < len; i++) {
        int left = i, right = i;
        while (left >= 0 && right < len && str[left] == str[right]) {
            ++total;
            --left;
            ++right;
        }

        left = i;
        right = i + 1;
        while (left >= 0 && right < len && str[left] == str[right]) {
            ++total;
            --left;
            ++right;
        }
    }

    return total;
}

int main() {
    string str = "abc";

    int result = countPalindromicSubstrings(str);
    cout << "Total Palindromic Substrings: " << result << endl;

    return 0;
}
