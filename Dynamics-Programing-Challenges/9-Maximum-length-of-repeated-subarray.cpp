#include <iostream>
#include <algorithm>

using namespace std;

int findLength(int A[], int B[], int m, int n) {
    int maxLength = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int length = 0;
            while (i + length < m && j + length < n && A[i + length] == B[j + length]) {
                ++length;
            }
            maxLength = max(maxLength, length);
        }
    }

    return maxLength;
}

int main() {
    int A[] = {1, 2, 3, 2, 1};
    int B[] = {3, 2, 1, 4, 7};
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    int result = findLength(A, B, m, n);
    cout << "Maximum Length of Repeated Subarray: " << result << endl;

    return 0;
}
