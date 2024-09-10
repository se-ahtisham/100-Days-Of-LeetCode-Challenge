#include <iostream>
using namespace std;

// Function to compute and print Fibonacci numbers up to 'number' terms
void fab(int number) {
    int t1 = 0;
    int t2 = 1;
    
    if (number <= 0) return; // No terms to display
    
    cout << t1;
    if (number == 1) return; // Only one term
    
    cout << " " << t2;
    for (int i = 2; i < number; i++) {
        int next = t1 + t2;
        cout << " " << next;
        t1 = t2;
        t2 = next;
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Please Enter Number: ";
    cin >> number;

    fab(number);

    return 0;
}
