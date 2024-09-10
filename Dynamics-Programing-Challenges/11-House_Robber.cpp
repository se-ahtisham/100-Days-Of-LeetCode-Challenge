#include <iostream>
#include <algorithm>

using namespace std;

int rob(int nums[], int size) {
    if (size == 0) return 0;
    if (size == 1) return nums[0];
    
    int prev1 = 0;
    int prev2 = 0;
    
    for (int i = 0; i < size; i++) {
        int current = max(prev2 + nums[i], prev1);
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}

int main() {
    int nums[] = {2, 3, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = rob(nums, size);
    cout << "Maximum amount of money that can be robbed: " << result << endl;

    return 0;
}
