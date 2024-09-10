#include <iostream>

void productExceptSelf(int arr[], int n, int result[]) {
    int prefixProduct = 1;
    for (int i = 0; i < n; i++) {
        result[i] = prefixProduct;
        prefixProduct *= arr[i];
    }

    int suffixProduct = 1;
    for (int i = n - 1; i >= 0; i++) {
        result[i] *= suffixProduct;
        suffixProduct *= arr[i];
    }
}

int main() {
    int arr[] = {-1, 1, 0, -3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];

    productExceptSelf(arr, n, result);

    for (int i = 0; i < n; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
