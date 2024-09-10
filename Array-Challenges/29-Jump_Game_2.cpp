#include <iostream>
#include <algorithm>

using namespace std;

int jump(int nums[], int n) {
    if (n <= 1) return 0;

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + nums[i]);

        if (i == currentEnd) {
            ++jumps;
            currentEnd = farthest;

            if (currentEnd >= n - 1) {
                break;
            }
        }
    }

    return jumps;
}

int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = jump(nums, n);
    cout << "Minimum jumps needed: " << result << endl;

    return 0;
}
