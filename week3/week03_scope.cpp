#include <iostream>

int globalValue = 100;

void counter() {
    static int callCount = 0;  // static local
    int localValue = 10;       // local / stack
    ++callCount;

    std::cout << "callCount = " << callCount
              << ", localValue = " << localValue << '\n';
}

int main() {
    int stackValue = 5;
    int* heapValue = new int(30);

    std::cout << "globalValue = " << globalValue << '\n';
    std::cout << "stackValue  = " << stackValue << '\n';
    std::cout << "heapValue   = " << *heapValue << '\n';

    counter();
    counter();

    delete heapValue;
    heapValue = nullptr;

    return 0;
}