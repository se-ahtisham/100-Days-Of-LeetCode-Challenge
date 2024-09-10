#include <iostream>

using namespace std;

int subarraySumEqualsK(int nums[], int size, int k) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = i; j < size; j++) {
            sum += nums[j];
            if (sum == k) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int nums[] = {1, 1, 1};
    int k = 2;
    int size = sizeof(nums) / sizeof(nums[0]);

    cout << subarraySumEqualsK(nums, size, k) << endl;

    return 0;
}
