#include <iostream>
using namespace std;


void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Please Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

bool findPairWithSum(const int arr[], int size, int target, int& firstIndex, int& secondIndex) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] + arr[i + 1] == target) {
            firstIndex = i;
            secondIndex = i+1;
            return true;
        }
    }
    return false;
}

void printResult(bool found, int firstIndex, int secondIndex) {
    if (found) {
        cout << "Pair Found!" << endl;
        cout << "First Index: " << firstIndex << endl;
        cout << "Second Index: " << secondIndex << endl;
    }
    else {
        cout << "No consecutive elements sum up to the target value." << endl;
    }
}

int main() {
    int size, target;

    cout << "Please Enter Size: ";
    cin >> size;


    if (size <= 0) {
        cout << "Size must be a positive integer." << endl;
        return 1;
    }

    int* arr = new int[size];

    inputArray(arr, size);

    cout << endl;
    cout << "Please Enter Target: ";
    cin >> target;

    int firstIndex = -1, secondIndex = -1;


    bool found = findPairWithSum(arr, size, target, firstIndex, secondIndex);

    printResult(found, firstIndex, secondIndex);

    delete[] arr;

    return 0;
}




