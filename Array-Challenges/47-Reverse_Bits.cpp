#include <iostream>

unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; ++i) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}

int main() {
    unsigned int n = 43261596; // Example input
    unsigned int reversed = reverseBits(n);
    std::cout << "Reversed Bits: " << reversed << std::endl;
    return 0;
}
