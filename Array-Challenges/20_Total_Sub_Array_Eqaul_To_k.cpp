#include <iostream>
#include <unordered_map>
using namespace std;

int countSubarraysWithSum(int arr[], int size, int target) {
    unordered_map<int, int> prefixSumCount;
    int currentSum = 0;
    int count = 0;

    prefixSumCount[0] = 1;

    for (int i = 0; i < size; ++i) {
        currentSum += arr[i];

        if (prefixSumCount.find(currentSum - target) != prefixSumCount.end()) {
            count += prefixSumCount[currentSum - target];
        }

        prefixSumCount[currentSum]++;
    }

    return count;
}

int main() {
    int size, target;

    cout << "Please Enter Size: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Please Enter Target: ";
    cin >> target;

    for (int i = 0; i < size; ++i) {
        cout << "Please Enter Element: ";
        cin >> arr[i];
    }

    int result = countSubarraysWithSum(arr, size, target);
    cout << "The number of subarrays with sum " << target << " is: " << result << endl;

    delete[] arr;

    return 0;
}
