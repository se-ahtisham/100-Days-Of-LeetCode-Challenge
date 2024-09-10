#include <iostream>

bool checkSubarraySum(int nums[], int size, int k) {
    if (size < 2) return false;

    for (int i = 0; i < size - 1; i++) { // Ensure at least two elements for subarray
        int total = 0;
        for (int j = i; j < size; j) {
            total += nums[j];
            if ((k == 0 && total == 0) || (k != 0 && total % k == 0)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int nums[] = {23, 2, 4, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 6;

    bool result = checkSubarraySum(nums, size, k);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}
