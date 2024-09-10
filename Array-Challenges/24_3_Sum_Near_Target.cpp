#include <iostream>
#include <cmath>
#include <algorithm> // For sorting
using namespace std;

int threeSumClosest(int arr[], int arr_size, int target) {
    sort(arr, arr + arr_size); // Sort the array
    
    int closest_sum = arr[0] + arr[1] + arr[2];
    
    for (int i = 0; i < arr_size - 2; i++) {
        int left = i + 1;
        int right = arr_size - 1;
        
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            
            if (abs(sum - target) < abs(closest_sum - target)) {
                closest_sum = sum;
            }
            
            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                return closest_sum; // If sum == target, we found the closest possible
            }
        }
    }
    
    return closest_sum;
}

int main() {
    int arr[] = {0, 0, 0}; // Example input
    int target = 1;
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = threeSumClosest(arr, arr_size, target);
    cout << "The sum that is closest to the target is: " << result << endl;

    return 0;
}
