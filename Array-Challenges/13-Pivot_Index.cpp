#include <iostream>
using namespace std;

int pivotIndex(int nums[], int size) {
    if (size == 0) return -1;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < size; i++) {
        rightSum += nums[i];
    }

    for (int i = 0; i < size; i++) {
        rightSum -= nums[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}

int main() {
    int nums1[] = { 1, 7, 3, 6, 5, 6 };
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Pivot index of nums1: " << pivotIndex(nums1, size1) << endl;

    int nums2[] = { 1, 2, 3 };
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    cout << "Pivot index of nums2: " << pivotIndex(nums2, size2) << endl;

    return 0;
}
