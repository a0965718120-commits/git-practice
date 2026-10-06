#include <cstring>
#include <iostream>
#include <string>

int main() {
    char cText[] = "Hello";
    char cText2[] = "Hello";
    std::string cppText = "Hello C++";

    std::cout << "strlen(cText) = " << std::strlen(cText) << '\n';
    std::cout << "strcmp result = " << std::strcmp(cText, cText2) << '\n';
    std::cout << "cppText.length() = " << cppText.length() << '\n';
    std::cout << "substr(6, 3) = " << cppText.substr(6, 3) << '\n';
    std::cout << "find(\"C++\") = " << cppText.find("C++") << '\n';
    std::cout << "c_str() = " << cppText.c_str() << '\n';

    return 0;
}