#include "Array.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

template<typename T>
Array<T>::Array(int size) {
    data.resize(size);
    srand(time(NULL));
    for (int i = 0; i < size; ++i) {
        data[i] = rand() % 101 - 50;
    }
}

template<typename T>
void Array<T>::printArray() const {
    for (const auto& num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

template<typename T>
template<typename UnaryPredicate>
T Array<T>::sum_if(UnaryPredicate pred) const {
    T sum = 0;
    for (const auto& elem : data) {
        if (pred(elem)) {
            sum += elem;
        }
    }
    return sum;
}

template<typename T>
T Array<T>::sum() const {
    T sum = 0;
    for (const auto& elem : data) {
        sum += elem;
    }
    return sum;
}

