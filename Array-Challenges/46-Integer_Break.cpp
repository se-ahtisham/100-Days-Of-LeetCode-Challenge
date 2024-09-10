#include <iostream>
#include <algorithm>

using namespace std;

int integerBreak(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;
    
    int dp[n + 1] = {0};
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
        }
    }

    return dp[n];
}

int main() {
    int n = 10;
    cout << "Maximum product for integer " << n << " is: " << integerBreak(n) << endl;
    return 0;
}
