#include <iostream>
#include <algorithm>

using namespace std;

int lengthOfLIS(const int nums[], int size) {
    if (size == 0) return 0;

    int dp[size];
    int maxLength = 1;

    for (int i = 0; i < size; ++i) {
        dp[i] = 1;
        for (int j = 0; j < i; ++j) {
            if (nums[j] < nums[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        maxLength = max(maxLength, dp[i]);
    }

    return maxLength;
}

int main() {
    int nums[] = {10, 9, 2, 5, 3, 7, 101, 18};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = lengthOfLIS(nums, size);
    cout << "Length of Longest Increasing Subsequence: " << result << endl;

    return 0;
}
