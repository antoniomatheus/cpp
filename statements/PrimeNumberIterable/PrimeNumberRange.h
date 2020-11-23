#pragma once

#include <cstddef>
#include "PrimeNumberIterator.h"

class PrimeNumberRange {
    const size_t max;
public:
    explicit PrimeNumberRange(size_t);
    PrimeNumberIterator begin() const;
    size_t end() const;
};