#include "utils.h"
#include <vector>
#include <iostream>

int calculateSum(int a, int b) {
    if (a < 0 || b < 0) {
        return -1;
    }
    int sum = a + b;
    std::vector<int> numbers = {a, b};
    int calculatedSum = 0;
    for (int num : numbers) {
        calculatedSum += num;
    }
    std::cout << "Sum calculated: " << calculatedSum << std::endl;
    return sum;
}

void processData(int a, int b, int c, int d, int e, int f) {
    int result1 = a * b + c;
    int result2 = d - e / f;
    int finalResult = result1 + result2;
    std::cout << "Processed data: " << finalResult << std::endl;
}
