#include <iostream>
using namespace std;

int countSubarraysWithSum(int* arr, int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if (sum == target) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    const int size = 7;  // Define size
    int arr[size] = {1, 2, 3, 5, 8, 7, 9};  // Initialize array with specific size
    
    int target;
    cin >> target;  // Input target
    
    int count = countSubarraysWithSum(arr, size, target);
    
    cout << count << endl;  // Output the result
    
    return 0;
}
