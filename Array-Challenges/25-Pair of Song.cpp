#include <iostream>
using namespace std;

int numPairsDivisibleBy60(int time[], int timeSize) {
    int remainderCount[60] = {0};
    int count = 0;

    for (int i = 0; i < timeSize; i++) {
        int remainder = time[i] % 60;
        int complement = (60 - remainder) % 60;
        count += remainderCount[complement];
        remainderCount[remainder]++;
    }

    return count;
}

int main() {
    int time[] = {30, 20, 150, 100, 40};
    int timeSize = sizeof(time) / sizeof(time[0]);

    int result = numPairsDivisibleBy60(time, timeSize);
    cout << "Number of pairs divisible by 60: " << result << endl;

    return 0;
}
