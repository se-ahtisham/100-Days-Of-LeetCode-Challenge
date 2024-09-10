#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

bool find3Numbers(int arr[], int size, int sum) {
    sort(arr, arr + size);

    for (int i = 0; i < size - 2; i++) {
        int left = i + 1;
        int right = size - 1;

        while (left < right) {
            if (arr[i] + arr[left] + arr[right] == sum) {
                cout << "Triplet is " << arr[i] << ", " << arr[left] << ", " << arr[right] << endl;
                return true;
            } else if (arr[i] + arr[left] + arr[right] < sum) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "No triplet found with the given sum." << endl;
    return false;
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 22;

    find3Numbers(arr, size, sum);

    return 0;
}
