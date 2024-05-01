#pragma once
#include <vector>

template<typename T>
class Array {
private:
    std::vector<T> data;

public:
    Array(int size);

    void printArray() const;

    template<typename UnaryPredicate>
    T sum_if(UnaryPredicate pred) const;

    T sum() const;
};


