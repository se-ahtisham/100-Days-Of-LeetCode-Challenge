#include <iostream>
#include <algorithm>

using namespace std;

void fourSum(int nums[], int n, int target) {
    sort(nums, nums + n);

    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicate values for i
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicate values for j
            for (int k = j + 1; k < n - 1; k++) {
                if (k > j + 1 && nums[k] == nums[k - 1]) continue; // Skip duplicate values for k
                for (int l = k + 1; l < n; l++) {
                    if (l > k + 1 && nums[l] == nums[l - 1]) continue; // Skip duplicate values for l
                    int sum = nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        cout << "[" << nums[i] << ", " << nums[j] << ", " << nums[k] << ", " << nums[l] << "]\n";
                    }
                }
            }
        }
    }
}

int main() {
    int nums[] = {1, 0, -1, 0, -2, 2};
    int target = 0;
    int size = sizeof(nums) / sizeof(nums[0]);

    fourSum(nums, size, target);

    return 0;
}
