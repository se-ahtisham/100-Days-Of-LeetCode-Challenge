#include <iostream>
#include <algorithm>

using namespace std;

int superEggDrop(int k, int n) {
    if (n == 0) return 0;
    if (k == 1) return n;

    int low = 1, high = n, result = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int breakCase = superEggDrop(k - 1, mid - 1);
        int noBreakCase = superEggDrop(k, n - mid);

        int worstCase = max(breakCase, noBreakCase) + 1;
        result = min(result, worstCase);

        if (breakCase > noBreakCase) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int k = 2;
    int n = 10;
    cout << "Minimum number of attempts: " << superEggDrop(k, n) << endl;
    return 0;
}
