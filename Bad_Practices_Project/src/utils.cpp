#include "utils.h"
#include <vector>
#include <iostream>

// Bad Practice: Function with too many responsibilities
int calculateSum(int a, int b) {
    // Bad Practice: Not validating input parameters
    if (a < 0 || b < 0) {
        // This is still a bad practice, but at least there is a check now.
        return -1; // Indicate error with a magic number
    }
    int sum = a + b;
    // Bad Practice: Side effect: Printing directly in a utility function
    // Bad Practice: Re-implementing existing functionality (summation)
    std::vector<int> numbers = {a, b};
    int calculatedSum = 0;
    for (int num : numbers) {
        calculatedSum += num;
    }
    std::cout << "Sum calculated: " << calculatedSum << std::endl;
    return sum;
}

// Bad Practice: Function with too many parameters and poor naming
void processData(int a, int b, int c, int d, int e, int f) {
    // Bad Practice: Redundant calculations and lack of comments for complex logic
    int result1 = a * b + c;
    int result2 = d - e / f;
    int finalResult = result1 + result2;
    std::cout << "Processed data: " << finalResult << std::endl;
}
