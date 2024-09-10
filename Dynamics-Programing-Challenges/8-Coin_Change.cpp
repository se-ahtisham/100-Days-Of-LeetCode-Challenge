#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int coinChange(int coins[], int coinsSize, int amount) {
    int minCoins[amount + 1];

    for (int i = 0; i <= amount; i++) {
        minCoins[i] = amount + 1;
    }

    minCoins[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < coinsSize; j++) {
            if (i - coins[j] >= 0) {
                minCoins[i] = min(minCoins[i], minCoins[i - coins[j]] + 1);
            }
        }
    }

    return minCoins[amount] > amount ? -1 : minCoins[amount];
}

int main() {
    int coins[] = {1, 2, 5};
    int coinsSize = sizeof(coins) / sizeof(coins[0]);
    int amount = 11;
    int result = coinChange(coins, coinsSize, amount);
    cout << "Minimum coins needed: " << result << endl;
    return 0;
}
