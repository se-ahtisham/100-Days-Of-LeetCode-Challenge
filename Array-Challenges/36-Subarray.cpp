#include <iostream>
using namespace std;

void printAllSubarrays(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            for (int k = i; k <= j; k++) {
                cout << nums[k] << " ";
        }
        cout<<endl;
        }
      }
    }

int main() {
    int nums[] = {4, 5, 0, -2, -3, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    printAllSubarrays(nums, size);

    return 0;
}
