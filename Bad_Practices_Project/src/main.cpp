#include <iostream>
#include "utils.h" // Corrected include

int globalCounter = 0;

void setArray() {
    int* data = new int[100];
    std::cout << "Array is set." << std::endl;
}

int main() {
    for (int i = 0; i < 100; ++i) {
        globalCounter++;
    }
    std::cout << "Global Counter: " << globalCounter << std::endl;

    setArray();

    if (globalCounter == 100) {
        std::cout << "Counter reached 100." << std::endl;
    }

    calculateSum(5, 3);

    return 0;
}
