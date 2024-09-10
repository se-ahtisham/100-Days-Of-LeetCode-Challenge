#include <iostream>
#include <algorithm>

using namespace std;

int maxScore(int cardPoints[], int n, int k) {
    int leftSum = 0;

    for (int i = 0; i < k; ++i) {
        leftSum += cardPoints[i];
    }

    int rightSum = 0;
    int maxSum = leftSum;
    int left = k - 1;
    int right = n - 1;

    while (left >= 0) {
        leftSum -= cardPoints[left];
        rightSum += cardPoints[right];
        maxSum = max(maxSum, leftSum + rightSum);
        left--;
        right--;
    }

    return maxSum;
}

int main() {
    int cardPoints[] = {9, 7, 7, 9, 7, 7, 9};
    int n = sizeof(cardPoints) / sizeof(cardPoints[0]);
    int k = 7;

    int result = maxScore(cardPoints, n, k);
    cout << "Maximum score: " << result << endl;

    return 0;
}
