#include <iostream>
#include <algorithm>

using namespace std;

int deleteAndEarn(int nums[], int size) {
    int max_val = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] > max_val) {
            max_val = nums[i];
        }
    }

    int points[max_val + 1] = {0};

    for (int i = 0; i < size; i++) {
        points[nums[i]] += nums[i];
    }

    int prev1 = 0;
    int prev2 = 0;
    int current = 0;

    for (int i = 0; i <= max_val; ++i) {
        current = max(prev2, prev1 + points[i]);
        prev1 = prev2;
        prev2 = current;
    }

    return current;
}

int main() {
    int nums[] = {3, 4, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "Maximum points: " << deleteAndEarn(nums, size) << endl;
    return 0;
}
