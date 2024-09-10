#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string s) {
    string filtered = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i])) {
            filtered += tolower(s[i]);
        }
    }

    int length = filtered.length();
    for (int i = 0; i < length / 2; i++) {
        if (filtered[i] != filtered[length - 1 - i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
