#include <iostream>
using namespace std;

int removeElement(int nums[], int size, int val) {
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (nums[i] != val) {
            nums[index++] = nums[i];
        }
    }

    return index;
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int val = 3;

    int newSize = removeElement(nums, size, val);

    for (int i = 0; i < newSize; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
