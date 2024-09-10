#include <iostream>
#include <algorithm>

using namespace std;

string longestCommonPrefix(string ar[], int n) {
    if (n == 0)
        return "";

    if (n == 1)
        return ar[0];

    sort(ar, ar + n);

    string first = ar[0], last = ar[n - 1];
    int i = 0;
    while (i < first.size() && i < last.size() && first[i] == last[i])
        i++;

    return first.substr(0, i);
}

int main() {
    string ar[] = {"flower", "flow", "flight"};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << "The longest common prefix is: " << longestCommonPrefix(ar, n);
    return 0;
}
