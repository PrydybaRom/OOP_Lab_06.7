#include <iostream>
#include "Array.cpp"

int main() {
    int size;
    std::cout << "Enter Size Array: ";
    std::cin >> size;

    Array<int> arr(size);
    std::cout << "Start Array:" << std::endl;
    arr.printArray();

    auto is_positive = [](int x) { return x > 0; };
    auto is_negative = [](int x) { return x < 0; };

    int sum_all = arr.sum();
    int sum_positive = arr.sum_if(is_positive);
    int sum_negative = arr.sum_if(is_negative);

    std::cout << "Sum of all elements: " << sum_all << std::endl;
    std::cout << "Sum of positive elements: " << sum_positive << std::endl;
    std::cout << "Sum of negative elements: " << sum_negative << std::endl;

    return 0;
}
