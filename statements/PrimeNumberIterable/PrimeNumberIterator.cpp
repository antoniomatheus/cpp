#include <cstddef>
#include <iostream>

#include "PrimeNumberIterator.h"

PrimeNumberIterator& PrimeNumberIterator::operator++() {
    for (size_t i{ current * current }; i < max; i += current) {
        numbers[i] = 0;
    }

    const auto prev = current;

    for (size_t i{ current + 1 }; i < max; i++) {
        if (numbers[i] != 0) {
            current = i;
            break;
        }
    }

    if (current == prev) {
        finished = true;
    }

    return *this;
}

bool PrimeNumberIterator::operator!=(size_t x) const {
    return !finished; 
}

size_t PrimeNumberIterator::operator*() const {
    return current;
}