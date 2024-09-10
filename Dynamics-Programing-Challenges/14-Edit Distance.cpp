#include <iostream>
#include <algorithm>

using namespace std;

int minDistance(const string& word1, const string& word2) {
    int m = word1.length();
    int n = word2.length();

    if (m == 0) return n;
    if (n == 0) return m;

    int dp[n + 1];

    for (int j = 0; j <= n; j++) {
        dp[j] = j;
    }

    for (int i = 1; i <= m; i++) {
        int prev = dp[0];
        dp[0] = i;
        for (int j = 1; j <= n; j++) {
            int temp = dp[j];
            if (word1[i - 1] == word2[j - 1]) {
                dp[j] = prev;
            } else {
                dp[j] = 1 + min({dp[j - 1], dp[j], prev});
            }
            prev = temp;
        }
    }

    return dp[n];
}

int main() {
    string word1 = "horse";
    string word2 = "ros";
    cout << "Minimum distance: " << minDistance(word1, word2) << endl;
    return 0;
}
