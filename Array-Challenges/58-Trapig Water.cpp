#include <iostream>
#include <algorithm>

using namespace std;

int trap(const int height[], int n) {
    if (n == 0) return 0;

    // Use arrays with size n
    int left_max[n];
    int right_max[n];

    // Compute left_max array
    left_max[0] = height[0];
    for (int i = 1; i < n; ++i) {
        left_max[i] = max(left_max[i - 1], height[i]);
    }

    // Compute right_max array
    right_max[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        right_max[i] = max(right_max[i + 1], height[i]);
    }

    // Calculate the total trapped water
    int total_water = 0;
    for (int i = 0; i < n; ++i) {
        total_water += min(left_max[i], right_max[i]) - height[i];
    }

    return total_water;
}

int main() {
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}; // Example input
    int n = sizeof(height) / sizeof(height[0]);
    cout << "Total trapped water: " << trap(height, n) << endl;
    return 0;
}
