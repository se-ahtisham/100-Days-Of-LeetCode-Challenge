#include <iostream>

int findPeakElement(int nums[], int length) {
    if (length == 0) return -1;

   
    if (length == 1 || nums[0] > nums[1]) return 0;
    if (nums[length - 1] > nums[length - 2]) return length - 1;

    // Handle the rest of the elements
    for (int i = 1; i < length - 1; ++i) {
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
            return i;
        }
    }

    return -1;
}

int main() {
    int nums[] = {1, 3, 5, 4, 2};
    int length = sizeof(nums) / sizeof(nums[0]);

    int peakIndex = findPeakElement(nums, length);
    if (peakIndex != -1) {
        std::cout << "Peak element is at index " << peakIndex << " with value " << nums[peakIndex] << std::endl;
    } else {
        std::cout << "No peak element found" << std::endl;
    }

    return 0;
}
