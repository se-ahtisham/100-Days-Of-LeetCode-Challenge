#include <iostream>
#include <algorithm>

using namespace std;

int maxProduct(int nums[], int size) {
    if (size == 0) return 0;

    int maxProduct = nums[0];

    for (int i = 0; i < size; i++) {
        int product = 1;
        for (int j = i; j < size; j++) {
            product *= nums[j];
            maxProduct = max(maxProduct, product);
        }
    }

    return maxProduct;
}

int main() {
    int nums[] = {2, 3, -2, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = maxProduct(nums, size);
    cout << "Maximum Product Subarray: " << result << endl;

    return 0;
}
