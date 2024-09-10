#include <iostream>
#include <algorithm>

using namespace std;

int maximumProduct(int arr[], int n) {
    sort(arr, arr + n);

    int max1 = arr[n - 1] * arr[n - 2] * arr[n - 3];
    int max2 = arr[0] * arr[1] * arr[n - 1];

    return max(max1, max2);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = maximumProduct(arr, n);
    cout << result;
    return 0;
}
