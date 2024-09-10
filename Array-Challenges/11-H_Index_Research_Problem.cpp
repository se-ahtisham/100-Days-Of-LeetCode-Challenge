#include <iostream>
#include <algorithm> // For std::sort

using namespace std;

int hIndex(int citations[], int size) {
    // Sort the array in non-decreasing order
    sort(citations, citations + size);

    // Find the H-Index
    int h = 0;
    for (int i = size - 1; i >= 0; --i) {
        int numPapers = size - i;
        if (citations[i] >= numPapers) {
            h = numPapers;
        } else {
            break;
        }
    }

    return h;
}

int main() {
    int citations[] = {3, 0, 6, 1, 5}; // Example input
    int size = sizeof(citations) / sizeof(citations[0]);

    int result = hIndex(citations, size);
    cout << "H-Index: " << result << endl;

    return 0;
}
