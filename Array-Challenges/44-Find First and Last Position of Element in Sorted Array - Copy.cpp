#include <iostream>

void searchRange(int nums[], int size, int target, int& firstPos, int& lastPos) {
    firstPos = -1;
    lastPos = -1;

    for (int i = 0; i < size; ++i) {
        if (nums[i] == target) {
            if (firstPos == -1) {
                firstPos = i;
            }
            lastPos = i;
        }
    }
}

int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 8;
    int firstPos, lastPos;

    searchRange(nums, size, target, firstPos, lastPos);

    std::cout << "First Position: " << firstPos << std::endl;
    std::cout << "Last Position: " << lastPos << std::endl;

    return 0;
}
