#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(string s, string t) {
    int index = 0;
    for (int i = 0; i < t.length(); ++i) {
        if (index < s.length() && s[index] == t[i]) {
            ++index;
        }
    }
    return index == s.length();
}

int main() {
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    if (isSubsequence(s, t)) {
        cout << s << " is a subsequence of " << t << "." << endl;
    } else {
        cout << s << " is not a subsequence of " << t << "." << endl;
    }

    return 0;
}
