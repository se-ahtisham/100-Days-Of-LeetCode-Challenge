#include <iostream>
#include <algorithm>

using namespace std;

int singleNumber(int nums[], int size) {
    sort(nums, nums + size);

    for (int i = 0; i < size - 1; i++) {
        if (nums[i] != nums[i + 1]) {
            return nums[i];
        }
        ++i;
    }

    return nums[size - 1];
}

int main() {
    int nums[] = {1, 2, 1, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = singleNumber(nums, size);
    cout << "The single number is " << result << endl;

    return 0;
}
