#include <format>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string name = "Amy";
    int age = 20;

    // C++20 std::format
    std::cout << std::format("{} is {} years old\n", name, age);

    // Older C++ alternative
    std::ostringstream oss;
    oss << name << " is " << age << " years old";
    std::cout << oss.str() << '\n';

    return 0;
}