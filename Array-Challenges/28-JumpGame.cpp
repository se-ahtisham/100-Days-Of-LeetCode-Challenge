#include <iostream>

using namespace std;

bool canJump(int nums[], int size) {
    int maxReach = 0;  

    for (int i = 0; i < size; i++) {
        if (i > maxReach) {
            return false;
        }
        maxReach = max(maxReach, i + nums[i]);
    }
    return true;
}

int main() {
    int nums[] = {3, 2, 1, 0, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    if (canJump(nums, size)) {
        cout << "Can reach the end of the array." << endl;
    } else {
        cout << "Cannot reach the end of the array." << endl;
    }

    return 0;
}
