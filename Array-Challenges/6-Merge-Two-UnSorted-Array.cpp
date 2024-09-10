#include <iostream>
#include <algorithm>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n) {
    sort(nums1, nums1 + m);
    sort(nums2, nums2 + n);

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            nums1[k++] = nums1[i++];
        } else {
            nums1[k++] = nums2[j++];
        }
    }

    while (i < m) {
        nums1[k++] = nums1[i++];
    }

    while (j < n) {
        nums1[k++] = nums2[j++];
    }
}

int main() {
    int nums1[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int nums2[4] = {6, 5, 8, 2};
    int m = 3;
    int n = 4;

    merge(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}
