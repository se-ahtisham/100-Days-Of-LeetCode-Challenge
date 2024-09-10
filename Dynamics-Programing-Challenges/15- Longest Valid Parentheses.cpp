#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int longestValidParentheses(const string& s) {
    int maxLength = 0;
    int indexArray[20];
    int index = 0;
    
    indexArray[index++] = -1;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            if (index < 20) {
                indexArray[index++] = i;
            }
        } else {
            if (index > 0) {
                index--;
                if (index > 0) {
                    maxLength = max(maxLength, i - indexArray[index - 1]);
                } else {
                    if (index < 20) {
                        indexArray[index++] = i;
                    }
                }
            }
        }
    }
    
    return maxLength;
}

int main() {
    string s = "(()())";
    cout << "Longest valid parentheses length: " << longestValidParentheses(s) << endl;
    return 0;
}
