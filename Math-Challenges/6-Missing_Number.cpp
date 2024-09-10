#include <iostream>

using namespace std;

int findMissingNumber(int nums[], int size) {
    int n = size;
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    
    for (int i = 0; i < size; i++) {
        actualSum += nums[i];
    }
    
    return expectedSum - actualSum;
}

int main() {
    int nums[] = {0, 1, 2, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int missingNumber = findMissingNumber(nums, size);
    cout << "The missing number is: " << missingNumber << endl;
    
    return 0;
}
