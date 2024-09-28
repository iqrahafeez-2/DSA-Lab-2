#include "maxmin.h"
#include <iostream>

int main() {
    int intArr[] = { 12, 45, 7, 23, 56, 89, 34 };
    float floatArr[] = { 12.5, 45.7, 7.2, 23.1, 56.9, 89.3, 34.2 };

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);

    int maxInt = findMax(intArr, intSize);
    float maxFloat = findMax(floatArr, floatSize);

    int minInt = findMin(intArr, intSize);
    float minFloat = findMin(floatArr, floatSize);

    std::cout << "Maximum integer value: " << maxInt << std::endl;
    std::cout << "Minimum integer value: " << minInt << std::endl;

    std::cout << "Maximum float value: " << maxFloat << std::endl;
    std::cout << "Minimum float value: " << minFloat << std::endl;

    return 0;
}
