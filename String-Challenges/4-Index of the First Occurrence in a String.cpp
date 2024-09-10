#include <iostream>
#include <string>

using namespace std;

int strStr(const string& haystack, const string& needle) {
    int m = haystack.length();
    int n = needle.length();
    
    if (n == 0) return 0;
    
    for (int i = 0; i <= m - n; ++i) {
        int j = 0;
        while (j < n && haystack[i + j] == needle[j]) {
            ++j;
        }
        if (j == n) return i;
    }
    
    return -1;
}

int main() {
    string haystack = "hello";
    string needle = "ll";
    cout << strStr(haystack, needle) << endl;
    return 0;
}
