#include <iostream>
#include <climits>

int minSubArrayLen(int target, int nums[], int numsSize) {
    int minLength = numsSize + 1;  // Initialize to a value larger than any possible subarray length
    
    for (int start = 0; start < numsSize; ++start) {
        int sum = 0;
        for (int end = start; end < numsSize; ++end) {
            sum += nums[end];
            if (sum >= target) {
                minLength = std::min(minLength, end - start + 1);
                break;  // Exit the inner loop since we found a valid subarray
            }
        }
    }
    
    return (minLength == numsSize + 1) ? 0 : minLength;
}

int main() {
    int nums[] = {2, 3, 1, 2, 4, 3};
    int target = 7;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int result = minSubArrayLen(target, nums, numsSize);
    std::cout << "Minimum Length: " << result << std::endl;
    
    return 0;
}
