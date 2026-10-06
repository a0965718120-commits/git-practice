#include <iostream>

int main() {
    int score = 85;
    int choice = 2;

    // if / else if / else
    if (score >= 90) {
        std::cout << "Grade: A\n";
    } else if (score >= 80) {
        std::cout << "Grade: B\n";
    } else if (score >= 60) {
        std::cout << "Grade: C\n";
    } else {
        std::cout << "Grade: F\n";
    }

    // switch / case
    switch (choice) {
    case 1:
        std::cout << "Choice: Start\n";
        break;
    case 2:
        std::cout << "Choice: Settings\n";
        break;
    case 3:
        std::cout << "Choice: Exit\n";
        break;
    default:
        std::cout << "Invalid choice\n";
    }

    // ternary operator
    std::string result = (score >= 60) ? "Pass" : "Fail";
    std::cout << "Result: " << result << '\n';

    return 0;
}