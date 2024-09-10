#include <iostream>

int uniquePaths(int m, int n) {
    int dp[n];
    
    for (int j = 0; j < n; j++) {
        dp[j] = 1;
    }

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[j] += dp[j - 1];
        }
    }

    return dp[n - 1];
}

int main() {
    int m = 3;
    int n = 7;

    int result = uniquePaths(m, n);
    std::cout << "Number of unique paths: " << result << std::endl;

    return 0;
}
