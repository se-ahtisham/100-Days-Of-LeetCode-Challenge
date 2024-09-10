#include <iostream>
using namespace std;

int canCompleteCircuit(int gas[], int cost[], int size) {
    int totalGas = 0;
    int totalCost = 0;
    int currentGas = 0;
    int startIndex = 0;

    for (int i = 0; i < size; i++) {
        totalGas += gas[i];
        totalCost += cost[i];
        currentGas += gas[i] - cost[i];

        if (currentGas < 0) {
            startIndex = i + 1;
            currentGas = 0;
        }
    }

    return (totalGas >= totalCost) ? startIndex : -1;
}

int main() {
    int gas[] = {2, 3, 4};
    int cost[] = {3, 4, 3};
    int size = sizeof(gas) / sizeof(gas[0]);

    int result = canCompleteCircuit(gas, cost, size);
    if (result != -1) {
        cout << "The starting gas station index is: " << result << endl;
    } else {
        cout << "It's not possible to complete the circuit." << endl;
    }

    return 0;
}
