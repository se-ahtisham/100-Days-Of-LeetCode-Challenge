#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minInsertions(const string& s, int i, int j) {
    if (i >= j) return 0;
    if (s[i] == s[j]) {
        return minInsertions(s, i + 1, j - 1);
    } else {
        return min(minInsertions(s, i + 1, j), minInsertions(s, i, j - 1)) + 1;
    }
}

int main() {
    string s = "zzazz";
    cout << "Minimum insertions: " << minInsertions(s, 0, s.length() - 1) << endl;
    return 0;
}
