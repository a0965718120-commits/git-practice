#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter three sides: ";
    std::cin >> a >> b >> c;

    // 判斷是否能形成三角形
    bool isTriangle =
        (a + b > c) &&
        (a + c > b) &&
        (b + c > a);

    if (!isTriangle) {
        std::cout << "Not a valid triangle\n";
        return 0;
    }

    std::cout << "Valid triangle\n";

    // 判斷是否為直角三角形
    bool isRightTriangle =
        (a * a + b * b == c * c) ||
        (a * a + c * c == b * b) ||
        (b * b + c * c == a * a);

    if (isRightTriangle) {
        std::cout << "Right triangle\n";
    } else {
        std::cout << "Not a right triangle\n";
    }

    return 0;
}