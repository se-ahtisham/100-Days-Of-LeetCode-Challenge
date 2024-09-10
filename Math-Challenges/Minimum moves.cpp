#include <iostream>
#include <algorithm> // For std::min_element

using namespace std;

int minMoves(int nums[], int size) {
    int minElement = nums[0];
    int moves = 0;

    // Find the minimum element
    for (int i = 1; i < size; ++i) {
        if (nums[i] < minElement) {
            minElement = nums[i];
        }
    }

    // Calculate the total moves
    for (int i = 0; i < size; ++i) {
        moves += nums[i] - minElement;
    }

    return moves;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* nums = new int[size];

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }

    int result = minMoves(nums, size);
    cout << "Minimum moves required: " << result << endl;

    delete[] nums;
    return 0;
}
