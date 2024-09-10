#include <iostream>
using namespace std;

// Function to find the Majority element in an array
void findMajority(const int arr[], int size) {
    int maxCount = 0;
    int majorityElement = -1;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            majorityElement = arr[i];
        }
    }

    if (maxCount > size / 2)
        cout << majorityElement << endl;
    else
        cout << "No Majority Element" << endl;
}

int main() {
    const int size = 7;
    int arr[size] = {1, 1, 2, 1, 3, 5, 1};

    findMajority(arr, size);

    return 0;
}
