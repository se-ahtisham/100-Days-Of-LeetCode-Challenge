#include <iostream>
#include <algorithm> // For std::max

using namespace std;

int maxSubArraySum(const int arr[], int n) {
    if (n == 0) return 0;

    int currentMax = arr[0];
    int globalMax = arr[0];

    // Start the loop from i = 1, since arr[0] is already considered
    for (int i = 1; i < n; i++) {
        currentMax = max(arr[i], currentMax + arr[i]);
        globalMax = max(globalMax, currentMax);
    }

    return globalMax;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum subarray sum is " << maxSubArraySum(arr, n) << endl;

    return 0;
}
