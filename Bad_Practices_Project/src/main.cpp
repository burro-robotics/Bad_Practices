#include <iostream>
#include "utils.h" // Corrected include

// Bad Practice: Global variable with no clear purpose or access control
int globalCounter = 0;

// Bad Practice: Using raw pointers and manual memory management without smart pointers
void createAndLeakMemory() {
    int* data = new int[100];
    // Forgot to delete data, memory leak!
    std::cout << "Memory allocated and potentially leaked." << std::endl;
}

int main() {
    // Bad Practice: Magic numbers directly in code
    for (int i = 0; i < 100; ++i) {
        globalCounter++;
    }
    std::cout << "Global Counter: " << globalCounter << std::endl;

    createAndLeakMemory();

    // Bad Practice: Hardcoding values, not using constants or enums
    if (globalCounter == 100) {
        std::cout << "Counter reached 100." << std::endl;
    }

    // Bad Practice: Not handling return values of functions, ignoring potential errors
    calculateSum(5, 3); // Return value ignored

    return 0;
}
