#include <iostream>

using namespace std;

int countPairsWithSum(int arr[], int size, int k) {
    int count = 0;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] - arr[i] == k) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 1; 

    int result = countPairsWithSum(arr, size, k);

    cout << "Number of pairs with sum " << k << ": " << result << endl;

    return 0;
}
