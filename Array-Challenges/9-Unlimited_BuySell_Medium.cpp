#include <iostream>
using namespace std;

int main() {
    int size1;
    cin >> size1;

    int* Price = new int[size1];
    int* userbuy = new int[size1];

    // Read elements for the Price array
    for (int i = 0; i < size1; ++i) {
        cin >> Price[i];
    }

    int choice = 0;
    int i = 0;
    
    while (choice != 1) {
        int buy, sell;
        cin >> buy >> sell;

        if (sell < buy) {
            cout << "You are trying to sell stock before buying :(" << endl;
        } else {
            userbuy[i] = Price[sell] - Price[buy];
            ++i;
        }

        cin >> choice;
    }

    int total = 0;
    for (int j = 0; j < i; ++j) {
        total += userbuy[j];
    }

    cout << "The Total is Equal: " << total << endl;

    delete[] Price;
    delete[] userbuy;
    return 0;
}
