#include <iostream>

unsigned long long xpx(unsigned long long a, unsigned long long b, unsigned long long c) {
    return ((a + c - 1ULL) / c) * ((b + c - 1ULL) / c);
}

int main() {
    unsigned long long a, b, c, k;
    std::cin >> a >> b >> c;
    k = xpx(a, b, c);
    std::cout << k;
    return 0;
}