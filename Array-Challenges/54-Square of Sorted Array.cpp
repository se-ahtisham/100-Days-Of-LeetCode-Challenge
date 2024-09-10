#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void sortedSquares(int nums[], int size) {
    int result[size];

    for (int i = 0; i < size; i++) {
        result[i] = pow(nums[i], 2);
    }

    sort(result, result + size);

    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[] = {-4, -1, 0, 3, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    sortedSquares(nums, size);

    return 0;
}
