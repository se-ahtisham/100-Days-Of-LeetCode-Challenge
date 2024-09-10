#include <iostream>

int trailingZeroes(int n) {
    int count = 0;
    while (n > 0) {
        n /= 5;
        count += n;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Number of trailing zeroes in " << n << "! is " << trailingZeroes(n) << std::endl;
    return 0;
}
