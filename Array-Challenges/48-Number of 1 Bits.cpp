#include <iostream>

int hammingWeight(uint32_t n) {
    int count = 0;
    while (n) {
        count += n & 1;  // Add the least significant bit (0 or 1) to count
        n >>= 1;         // Shift right by 1 to process the next bit
    }
    return count;
}

int main() {
    uint32_t num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;
    
    int result = hammingWeight(num);
    std::cout << "Number of 1 bits: " << result << std::endl;
    
    return 0;
}
