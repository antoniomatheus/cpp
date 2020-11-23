#include "PrimeNumberRange.h"

#include <cstddef>

PrimeNumberRange::PrimeNumberRange(size_t max): max{ max } {};

PrimeNumberIterator PrimeNumberRange::begin() const {
    return PrimeNumberIterator{ max };
}

size_t PrimeNumberRange::end() const {
    return max;
}