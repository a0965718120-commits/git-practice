#include <iostream>

int main() {
    int i = 5;

    std::cout << "i++ returns " << i++
              << ", then i = " << i << '\n';

    std::cout << "++i returns " << ++i
              << ", now i = " << i << '\n';

    int divisor = 0;

    if (divisor != 0 && 100 / divisor > 10) {
        std::cout << "condition is true\n";
    } else {
        std::cout << "short-circuit prevented unsafe division\n";
    }

    unsigned int a = 6; // 0110
    unsigned int b = 3; // 0011

    std::cout << "a & b = " << (a & b) << '\n';
    std::cout << "a | b = " << (a | b) << '\n';
    std::cout << "a ^ b = " << (a ^ b) << '\n';

    return 0;
}